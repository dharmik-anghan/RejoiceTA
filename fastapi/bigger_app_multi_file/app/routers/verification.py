from fastapi import APIRouter, Depends, HTTPException
from sqlalchemy.orm import Session
from app.dependencies import get_db
from app.models import User as model_user, Otps as Otp_user
from app.crud import verify_otp_for_creating_account

router = APIRouter(prefix="/verify",tags=["Verify"])

@router.put("/verify_account")
def update_status(email: str,otp: str, db: Session = Depends(get_db)):
    return verify_otp_for_creating_account(db, user_email=email, otp=otp)