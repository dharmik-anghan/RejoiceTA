def check_first_last_number(listofNumber: list[int]):
    if listofNumber[0] == listofNumber[-1]:
        return True
    else:
        return False
    
numbers_x = [10, 20, 30, 40, 10]
numbers_y = [75, 65, 35, 75, 30]

print(check_first_last_number(numbers_x))
print(check_first_last_number(numbers_y))