from .database import SessionLocal

# Dependency SQLALCHEMY Session
def get_db():
    db = SessionLocal()

    try:
        yield db
    finally:
        db.close()

