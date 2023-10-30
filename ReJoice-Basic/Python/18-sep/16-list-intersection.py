# 16. **List Intersection**
#   Write a function to find common elements between two lists.

def setOperations(set1: list, set2: list):
    intersection = list(set(set1).intersection(set(set2)))
    print(intersection)

setOperations([1,4,2,5,7,3,8], [2,3,4,1,6,8])