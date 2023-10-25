from typing import Union
from pydantic import BaseModel


class UserBase(BaseModel):
    first_name: str
    last_name: str
    email: str


class UserCreate(UserBase):
    hashed_password: str


class User(UserBase):
    id: int
    verified_email: bool

    class Config:
        from_attributes = True
