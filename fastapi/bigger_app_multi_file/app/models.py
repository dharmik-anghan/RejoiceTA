from sqlalchemy import Column, ForeignKey, Integer, Boolean, String, TIMESTAMP
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

    otps = relationship("Otps", back_populates="owner")

class Otps(Base):
    __tablename__ = "otps"

    otp_id = Column(Integer, primary_key=True, nullable=False)
    otp = Column(String, nullable=False)
    reason = Column(String, nullable=False)
    owner_id = Column(Integer, ForeignKey("users.user_id"))
    otp_created_at = Column(TIMESTAMP(timezone=True), nullable=False, server_default=text("now()"))

    owner = relationship("User", back_populates="otps")
