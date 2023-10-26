from sqlalchemy import Column, Integer, Boolean, String, TIMESTAMP
from sqlalchemy.sql.expression import text
from .database import Base
from sqlalchemy.orm import relationship


class User(Base):
    __tablename__ = "users"

    user_id = Column(Integer, primary_key=True, nullable=False, index=True)
    user_email = Column(String, unique=True, nullable=False, index=True)
    password = Column(String, nullable=False)
    verified_user = Column(Boolean, default=False)
    user_created_at = Column(
        TIMESTAMP(timezone=True), nullable=False, server_default=text("now()")
    )
    otp = Column(String, default=None)
    otp_created_at = Column(TIMESTAMP(timezone=True), nullable=False, server_default=text("now()"))

