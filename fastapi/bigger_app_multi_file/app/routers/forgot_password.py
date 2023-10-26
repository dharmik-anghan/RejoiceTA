from fastapi import APIRouter, Depends, HTTPException
from app.crud import verify_otp, get_user_by_email
from app.dependencies import get_db
from sqlalchemy.orm import Session
from app.utils import get_hashed_password
from app.schemas import UserForgotPassword

routers = APIRouter(prefix="/forgot-password", tags=["Forgot Password"])


@routers.put("/")
def reset_password(
    user: UserForgotPassword, db: Session = Depends(get_db)
):
    db_user = get_user_by_email(db=db, user_email=user.user_email)

    if not db_user:
        raise HTTPException(status_code=404, detail="User not found")

    if not verify_otp(db_user, otp=user.otp):
        raise HTTPException(status_code=401, detail="incorrect OTP entered")

    hashed_password = get_hashed_password(user.password)
    db_user.password = hashed_password
    db.add(db_user)
    db.commit()

    return HTTPException(status_code=200, detail="Successfully Changed Password")
