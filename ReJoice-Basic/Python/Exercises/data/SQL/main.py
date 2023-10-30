from fastapi import Depends , FastAPI , HTTPException
from sqlalchemy.orm import Session

from curd import create_user,create_user_item,get_items,get_users, get_user_by_email, get_user
import model
from schemas import Item, ItemCreate, UserCreate, User
from database import SessionLocal , engin

model.Base.metadata.create_all(bind = engin)

app = FastAPI()

def get_db():
    db = SessionLocal()
    try :
        yield db
    finally:
        db.close()

@app.post("/users/", response_model = User)
def create_user(user : UserCreate , db : Session = Depends(get_db)):
    db_user = get_user_by_email(db , email=user.email)
    if db_user :
        raise HTTPException(status_code=400, detail="Email already registered")
    return create_user(db=db , user=user)


@app.get("/users/" , response_model = list[User])
def get_users(skip : int = 0 , limit :int = 100 , db : Session = Depends(get_db)):
    users = get_users(db = db , skip = skip , limit = limit)
    return users

@app.get("/user/{user_id}",response_model = User)
def get_user(user_id : int , db : Session = Depends(get_db)):
    db_user = get_user(db=db,user_id=user_id)
    if db_user == None:
        HTTPException(status_code = 404 , details = "User not found")
    return db_user

@app.post("/user/{user_id}/item/",response_model = Item)
def create_item_for_user(user_id : int , item : ItemCreate  , db : Session = Depends(get_db)):
    return create_user_item(db=db,item=item,user_id=user_id)

@app.get("/items/" , response_model = list[Item])
def get_items(skip : int = 0 , limit : int = 100 , db : Session = Depends(get_db)):
    items = get_items(db=db,skip=skip,limit=limit)
    return items
