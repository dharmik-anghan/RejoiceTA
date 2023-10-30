from pydantic import BaseModel
from typing import Union , List

class ItemBase(BaseModel):
    title : str
    description : Union[str , None ] = None

class ItemCreate(ItemBase):
    pass

class Item(ItemBase):
    id : int
    owner_id : int

    class config :
        orm_model = True  

        

class UserBase(BaseModel):
    email : str

class UserCreate(UserBase):
    password : str

class User(UserBase):
    id : int 
    is_active : bool = True
    item : List[Item] = []

    class config :
        orm_model = True