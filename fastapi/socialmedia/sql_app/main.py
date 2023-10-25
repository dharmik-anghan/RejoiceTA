from fastapi import Depends, FastAPI, HTTPException
from sqlalchemy.orm import Session

from app import models, crud, schemas
from app.database import engine
from .dependencies import get_db

models.Base.metadata.create_all(bind=engine)

app = FastAPI()


@app.post("/users", response_model=schemas.User, tags=["Create User"])
def create_user(user: schemas.UserCreate, db: Session = Depends(get_db)):
    db_user = crud.get_user_by_email(db,email=user.email)
    if db_user:
        raise HTTPException(status_code=400, details="Email already Exist")
    return crud.create_user(db, user=user)

@app.get("/users", response_model=list[schemas.User], tags=["Read Users"])
def read_users(skip: int = 0, limit: int = 100, db: Session = Depends(get_db)):
    users = crud.get_users(db,skip=skip, limit=limit)
    return users

@app.put("/users/verify", tags=["Verify User"], response_model=schemas.User)
def verify_user(email: str, otp: str, db: Session = Depends(get_db)):
    return crud.verify_user_by_email(db, email=email, OTP=otp)
