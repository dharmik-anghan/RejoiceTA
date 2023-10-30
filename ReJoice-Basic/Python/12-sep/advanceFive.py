# 20. **Nested Lists Sum**: Use `map` and `reduce` to find the sum of elements in nested lists.

from functools import reduce


nestedList = [[1,2,3], [3,4,5], [5,6,7]]

def red(listofNum):
    return reduce(lambda x,y : x+y, listofNum)

sumofNestedList = list(map(red, nestedList))

print(sumofNestedList)