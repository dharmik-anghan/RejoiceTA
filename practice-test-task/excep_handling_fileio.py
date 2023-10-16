try:
    with open("xyz.txt", 'r') as read:
        pass
except FileNotFoundError as e:
    print(f"There is no file named {e.filename}")