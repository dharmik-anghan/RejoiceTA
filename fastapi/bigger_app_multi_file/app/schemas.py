from pydantic import BaseModel, EmailStr
from datetime import datetime


class UserBase(BaseModel):
    user_email: EmailStr


class UserCreate(UserBase):
    password: str


class User(UserBase):
    user_id: int
    verified_user: bool
    user_created_at: datetime

    class Config:
        from_attributes = True

class UserForgotPassword(UserCreate):
    otp: str
    
class UserVerifyOtp(UserBase):
    otp: str