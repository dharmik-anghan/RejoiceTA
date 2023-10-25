from passlib.context import CryptContext

pwd_context = CryptContext(schemes=["bcrypt"], deprecated="auto")


def get_hashed_password(password: str):
    return pwd_context.hash(password)

def verify_password(plaintext: str, hashed_password: str):
    return pwd_context.verify(plaintext, hashed_password)