from fastapi import APIRouter, Depends, HTTPException
from app.dependencies import get_db
from sqlalchemy.orm import Session
from app.schemas import User as schema_user, UserCreate
from app.crud import get_user_by_email, get_users, create_user as current_user


router = APIRouter(prefix="/users", tags=["User"])


@router.get("/", response_model=list[schema_user])
def read_users(skip: int = 0, limit: int = 100, db: Session = Depends(get_db)):
    db_user = get_users(db, skip=skip, limit=limit)
    if not db_user:
        raise HTTPException(status_code=200, detail="Database is empty")

    return db_user


@router.get("/{user_email}", response_model=schema_user)
def read_user(user_email: str, db: Session = Depends(get_db)):
    db_user = get_user_by_email(db, user_email=user_email)
    if not db_user:
        raise HTTPException(status_code=200, detail="Account not Found")

    return db_user


@router.post("/", response_model=schema_user)
def create_user(user: UserCreate, db: Session = Depends(get_db)):
    db_user = get_user_by_email(db, user_email=user.user_email)

    if db_user:
        raise HTTPException(status_code=200, detail="Email already exists")

    return current_user(db, user=user)
