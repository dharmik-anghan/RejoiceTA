from fastapi import APIRouter, Depends
from sqlalchemy.orm import Session
from app.dependencies import get_db
from app.crud import verify_user
from app.schemas import UserVerifyOtp

router = APIRouter(prefix="/verify",tags=["Verify"])

@router.put("/verify-user")
def update_status(user: UserVerifyOtp, db: Session = Depends(get_db)):
    if verify_user(db, user_email=user.user_email, otp=user.otp):
        return {"message": "User has been verified"}
