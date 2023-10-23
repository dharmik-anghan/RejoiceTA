import math
import random
import smtplib
from email.message import EmailMessage

from .models import User
from .to_hashed import get_hashed_password
from sqlalchemy.orm import Session

from_mail = "dharmikanghan09@gmail.com"

# Generate OTP and Return's OTP
def generate_otp():
    digits = "0123456789"
    OTP = ""

    for i in range(6):
        OTP += digits[math.floor(random.random() * 10)]

    return OTP

def get_otp_stored(email: str):
    OTP = generate_otp()
    otp = OTP + " is your OTP"

    msg = EmailMessage()

    msg.set_content(otp)

    msg["Subject"] = "OTP Verification"
    msg["From"] = from_mail
    msg["To"] = email

    s = smtplib.SMTP("smtp.gmail.com", 587)
    s.starttls()
    s.login(from_mail, "fjkvbtwbvccfqnie")
    s.send_message(msg)

    hashed_otp = get_hashed_password(OTP)
    return hashed_otp

