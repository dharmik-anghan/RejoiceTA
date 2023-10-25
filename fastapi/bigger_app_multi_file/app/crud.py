from fastapi import HTTPException, status
from sqlalchemy.orm import Session
from app.models import User as model_user, Otps as model_otp
from app.schemas import UserCreate
from app.utils import get_hashed_password, verify_hashed_password, sent_mail_to
from datetime import datetime, timedelta, timezone


def get_users(db: Session, skip: int = 0, limit: int = 100):
    return db.query(model_user).offset(skip).limit(limit).all()


def get_user_by_email(db: Session, user_email: str):
    return db.query(model_user).filter(model_user.user_email == user_email).first()


def get_user_by_id(db: Session, user_id: int):
    return db.query(model_user).filter(model_user.user_id == user_id).first()


def create_user(db: Session, user: UserCreate):
    hashed_password = get_hashed_password(user.password)
    db_user = model_user(user_email=user.user_email, password=hashed_password)
    db.add(db_user)
    db.commit()
    db.refresh(db_user)

    hashed_otp = sent_mail_to(user.user_email)
    db_otp = model_otp(
        reason="verify_account", owner_id=db_user.user_id, otp=hashed_otp
    )
    db.add(db_otp)
    db.commit()
    return db_user


def get_user_otp_info(db: Session, user_id: int):
    return db.query(model_otp).filter(model_otp.owner_id == user_id).first()


def verify_otp_for_creating_account(db: Session, user_email: int, otp: str):
    db_user = get_user_by_email(db, user_email=user_email)

    if not db_user:
        raise HTTPException(status_code=200, detail="Email has not been registered")
    
    if db_user.verified_user == True:
        raise HTTPException(status_code=200, detail="Email is already verified")

    db_otp = get_user_otp_info(db, user_id=db_user.user_id)

    if db_otp.reason != "verify_account":
        raise HTTPException(status_code=408, detail="Entered Incorrect OTP")

    current_time = datetime.now(timezone.utc)

    expire_otp = timedelta(minutes=15)

    time_difference = current_time - db_otp.otp_created_at
    if time_difference > expire_otp:
        raise HTTPException(status_code=408, detail="OTP has expired, Try again.")

    if verify_hashed_password(otp, db_otp.otp):
        db_user.verified_user = True
        db.add(db_user)
        db.commit()
        db.refresh(db_user)
    else:
        raise HTTPException(status_code=status.HTTP_406_NOT_ACCEPTABLE, detail="Entered Incorrect OTP.")

    return HTTPException(status_code=200, detail="User Verification Successfull")
