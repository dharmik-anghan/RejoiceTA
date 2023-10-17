from fastapi import FastAPI, HTTPException
from pydantic import BaseModel
from datetime import datetime
import psycopg2

conn = psycopg2.connect("dbname=fastapi user=postgres password=anghan")

if conn == None:
    raise HTTPException(headers="DB name or username or password is wrong",status_code=404,)

cursor = conn.cursor()

# class Post(BaseModel):
#     id: int | None = None
#     title: str
#     content: str
#     published: bool = True
#     created_at: datetime | None = None


app = FastAPI()

# @app.get("/", tags=["test"])
# def home():
#     return {"msg": "Hello World!"}

@app.get("/posts", tags=["Public Post"])
def get_posts():
    cursor.execute("select title, content, created_at from post")
    all_posts = cursor.fetchall()
    print(all_posts)
    return all_posts
