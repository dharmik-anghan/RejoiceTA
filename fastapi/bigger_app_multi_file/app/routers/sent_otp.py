from fastapi import APIRouter, Depends
from app.utils import sent_mail_to
from app.crud import store_otp_in_db
from sqlalchemy.orm import Session
from app.dependencies import get_db
from app.schemas import UserBase

router = APIRouter(prefix="/sent-otp", tags=["Sent OTP"])

@router.post("/")
def sent_otp(user: UserBase, db: Session = Depends(get_db)):
    hashed_otp = sent_mail_to(user.user_email)
    store_otp_in_db(db, user_email=user.user_email, otp=hashed_otp)

    return {"message": f"OTP has been sent successfully to {user.user_email}"}