def find_max(fruits: dict):
    return max(zip(fruits.values(), fruits.keys()))

fruits ={
    "apple": 0.99,
    "banana": 0.25,
    "carrot": 0.50,
    "bread": 2.99,
    "milk": 1.99
}

print(find_max(fruits))