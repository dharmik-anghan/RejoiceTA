from fastapi import FastAPI, HTTPException
from pydantic import BaseModel
from datetime import datetime
import psycopg2
from psycopg2.extras import RealDictCursor
import time

app = FastAPI()


class Post(BaseModel):
    title: str
    content: str
    published: bool = True


while True:
    try:
        conn = psycopg2.connect(
            host="localhost",
            database="fastapi",
            user="postgres",
            password="anghan",
            cursor_factory=RealDictCursor,
        )
        cursor = conn.cursor()
        print("Database connection was successful")
        break
    except Exception as error:
        print("Connecting to database failed")
        print(f"Error was {error}")
        time.sleep(2)

if conn == None:
    raise HTTPException(
        headers="DB name or username or password is wrong",
        status_code=404,
    )


@app.get("/posts", tags=["Public Post"])
def get_posts():
    cursor.execute(""" select * from post """)
    posts = cursor.fetchall()
    return {"data": posts}
