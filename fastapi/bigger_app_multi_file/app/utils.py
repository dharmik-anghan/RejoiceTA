from passlib.context import CryptContext
from smtplib import SMTP
from email.message import EmailMessage
import math, random

# Create and verify hashed password and text
pwd_context = CryptContext(schemes=["bcrypt"], deprecated="auto")


def get_hashed_password(password: str):
    return pwd_context.hash(password)


def verify_hashed_password(plaintext: str, hashed_password: str):
    return pwd_context.verify(plaintext, hashed_password)


# Sending mail for verification of mail
from_mail = "dharmikanghan09@gmail.com"


def sent_mail_to(email: str):
    digits = "0123456789"

    otp = ""

    for i in range(4):
        otp += digits[math.floor(random.random() * 10)]

    content = f"{otp} is your OTP. \nPlease do not share it with anyone."

    msg = EmailMessage()

    msg.set_content(content)

    msg["Subject"] = "OTP Verification"
    msg["From"] = from_mail
    msg["To"] = email

    s = SMTP("smtp.gmail.com", 587)
    s.starttls()
    s.login(from_mail, "fjkvbtwbvccfqnie")
    s.send_message(msg)

    hashed_otp = get_hashed_password(otp)
    
    return hashed_otp
