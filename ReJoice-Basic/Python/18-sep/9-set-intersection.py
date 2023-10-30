# 9. **Set Intersection**
#   Write a function to find common elements between two sets.

def setOperations(set1: set, set2: set):
    intersection = set1.intersection(set2)
    print(intersection)

setOperations({1,4,2,5,7,3,8}, {2,3,4,1,6,8})