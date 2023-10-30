# 2. **Set Operations**
#   Create a program that takes two sets and returns their intersection and union.

def setOperations(set1: set, set2: set):
    intersection = set1.intersection(set2)
    union = set1.union(set2)
    print(intersection)
    print(union)

setOperations({1,4,2,5,7,3,8}, {2,3,4,1,6,8})