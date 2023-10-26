from fastapi import HTTPException, status
from sqlalchemy.orm import Session
from app.models import User as model_user
from app.schemas import UserCreate
from app.utils import (
    get_hashed_password,
    verify_hashed_password,
    sent_mail_to,
    time_difference,
)
from datetime import timedelta, timezone, datetime

TIME_TO_EXPIRE_OTP = timedelta(minutes=15)


def get_users(db: Session, skip: int = 0, limit: int = 100):
    return db.query(model_user).offset(skip).limit(limit).all()


def get_user_by_email(db: Session, user_email: str):
    return db.query(model_user).filter(model_user.user_email == user_email).first()


def get_user_by_id(db: Session, user_id: int):
    return db.query(model_user).filter(model_user.user_id == user_id).first()


def create_user(db: Session, user: UserCreate):
    hashed_password = get_hashed_password(user.password)
    hashed_otp = sent_mail_to(user.user_email)
    db_user = model_user(
        user_email=user.user_email, password=hashed_password, otp=hashed_otp
    )
    db.add(db_user)
    db.commit()
    db.refresh(db_user)

    return db_user


def verify_otp(db_user, otp: str):

    if not db_user:
        raise HTTPException(status_code=200, detail="Email has not been registered")


    expire_otp = TIME_TO_EXPIRE_OTP

    difference_time = time_difference(db_user.otp_created_at)
    if difference_time > expire_otp:
        raise HTTPException(status_code=408, detail="OTP has expired, Try again.")

    if verify_hashed_password(otp, db_user.otp):
        return True
    else:
        raise HTTPException(
            status_code=status.HTTP_406_NOT_ACCEPTABLE, detail="Entered Incorrect OTP."
        )


def verify_user(db: Session, user_email: str, otp : str):
    db_user = get_user_by_email(db, user_email=user_email)
    if db_user.verified_user == True:
        raise HTTPException(status_code=200, detail="Email is already verified")

    if verify_otp(db_user, otp):
        db_user.verified_user = True
        db.add(db_user)
        db.commit()
        return True

def store_otp_in_db(db: Session, user_email: str, otp: str):
    db_user = get_user_by_email(db=db, user_email=user_email)

    if not db_user:
        raise HTTPException(status_code=404, detail="User Not Found")

    difference_time = time_difference(db_user.otp_created_at)
    resent_after = timedelta(minutes=1)

    if difference_time <= resent_after:
        raise HTTPException(
            status_code=200,
            detail=f"Wait {(resent_after-difference_time)}",
        )

    db_user.otp = otp
    db_user.otp_created_at = datetime.now(timezone.utc)
    db.add(db_user)
    db.commit()
