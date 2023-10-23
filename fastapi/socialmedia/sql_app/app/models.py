from sqlalchemy import Boolean, Column, Integer, String
from .database import Base


class User(Base):
    __tablename__ = "users"

    id = Column(Integer, index=True, primary_key=True, nullable=False)
    first_name = Column(String, index=True, nullable=False)
    last_name = Column(String, index=True)
    email = Column(String, index=True, unique=True, nullable=False)
    hashed_password = Column(String, nullable=False)
    verified_email = Column(Boolean, default=False)
    otp_for_email = Column(String, default=None)
