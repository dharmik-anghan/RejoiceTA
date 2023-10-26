from fastapi import FastAPI
from app.routers import forgot_password, users, verification, sent_otp, forgot_password
import app.models as models
from app.database import engine

models.Base.metadata.create_all(bind=engine)

app = FastAPI()

app.include_router(users.router)

app.include_router(verification.router)

app.include_router(sent_otp.router)

app.include_router(forgot_password.routers)

@app.get("/")
def home():
    return {"msg": "Hello world"}
