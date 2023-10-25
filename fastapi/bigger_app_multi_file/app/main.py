from fastapi import FastAPI
from app.routers import users, verification
import app.models as models
from app.database import engine

models.Base.metadata.create_all(bind=engine)

app = FastAPI()

app.include_router(users.router)

app.include_router(verification.router)
