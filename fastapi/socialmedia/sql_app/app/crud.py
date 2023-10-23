from fastapi import HTTPException
from sqlalchemy.orm import Session

from .models import User
from .schemas import UserCreate
from .verify_email import get_otp_stored
from .to_hashed import get_hashed_password, verify_password


def get_user(db: Session, user_id: int):
    return db.query(User).filter(User.id == user_id).first()


def get_user_by_email(db: Session, email: str):
    return db.query(User).filter(User.email == email).first()


def get_users(db: Session, skip: int = 0, limit: int = 100):
    return db.query(User).offset(skip).limit(limit).all()


def create_user(db: Session, user: UserCreate):
    real_hashed_password = get_hashed_password(user.hashed_password)

    hashed_otp = get_otp_stored(user.email)

    db_user = User(
        first_name=user.first_name,
        last_name=user.last_name,
        email=user.email,
        hashed_password=real_hashed_password,
        otp_for_email=hashed_otp,
    )
    db.add(db_user)
    db.commit()
    db.refresh(db_user)
    return db_user


def verify_user_by_email(db: Session, email: str = None, OTP: str = None):
    verified = db.query(User).filter(User.email == email)
    if verified.first() == None:
        raise HTTPException(status_code=404, detail="Email is not registred")
    user_data = verified.first()
    if verify_password(OTP, user_data.otp_for_email):
        verified.update({"verified_email": True, "otp_for_email": None}, synchronize_session=False)
    db.commit()
    return get_user_by_email(db, email=email)
