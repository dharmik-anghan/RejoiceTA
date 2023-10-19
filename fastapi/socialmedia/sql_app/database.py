# from sqlalchemy import create_engine
# from sqlalchemy.orm import sessionmaker
# from sqlalchemy.ext.declarative import declarative_base

# SQLALCHEMY_DATABASE_URL = "postgres://postgres:anghan@localhost/fastapi"

# engine = create_engine(SQLALCHEMY_DATABASE_URL)

# # Each instance of SessionLocal will be a database seddion
# SessionLocal = sessionmaker(autoflush=False, autocommit=False, bind=engine)

# # We'll use this in later part for making ORM models for DataBase
# Base = declarative_base()

from sqlalchemy import create_engine
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy.orm import sessionmaker

# SQLALCHEMY_DATABASE_URL = "sqlite:///./sql_app.db"
SQLALCHEMY_DATABASE_URL = "postgresql://postgresql:anghan@localhost/fastapi"

engine = create_engine(
    SQLALCHEMY_DATABASE_URL, connect_args={"check_same_thread": False}
)
SessionLocal = sessionmaker(autocommit=False, autoflush=False, bind=engine)

Base = declarative_base()
