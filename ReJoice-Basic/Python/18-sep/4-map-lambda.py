# 4. **Map and Lambda**
#   Use map and lambda to square each element in a list of numbers.

list_of_number = [1,2,3,4,5,6]

list_of_square = list(map(lambda x : x*x, list_of_number))

print(list_of_square)