from fastapi import FastAPI, HTTPException
from pydantic import BaseModel

app = FastAPI()

fake_db = []


class UserSchema(BaseModel):
    name: str
    email: str


class CreateUser(UserSchema):
    password: str


class UserOutput(UserSchema):
    id: int


def search_user(id, db):
    for i in range(len(db)):
        if db[i]["id"] == id:
            return db[i]


def index_user(id, db):
    for idx, user in enumerate(db):
        if user["id"] == id:
            return idx

    return None


@app.get("/users", response_model=list[UserSchema])
def get_all_users():
    return fake_db


@app.get("/user/{id}", response_model=UserSchema)
def get_user(id: int):
    user = search_user(id, fake_db)

    if user is None:
        raise HTTPException(404, detail={"msg": "User not found"})

    return user


@app.post("/users", response_model=UserSchema)
def create_user(user: CreateUser):
    db_user = user.model_dump()
    db_user["id"] = len(fake_db) + 1

    fake_db.append(db_user)

    return db_user


@app.put("/users/{id}", response_model=UserSchema)
def update_user(user: UserSchema, id: int):
    index = index_user(id, fake_db)
    user_dict = user.model_dump()

    if index is None:
        raise HTTPException(404, detail={"msg": "User not found"})

    fake_db[index]["name"] = user_dict.get("name")
    fake_db[index]["email"] = user_dict.get("email")

    return fake_db[index]


@app.delete("/users/{id}")
def delete_user(id: int):
    index = index_user(id, fake_db)

    if index is None:
        raise HTTPException(404, detail={"msg": "User not found"})

    fake_db.pop(index)

    return HTTPException(status_code=204)
