# 11. **Map and Reduce**
#   Use map and reduce to find the product of elements in a list.

from functools import reduce

list_of_num = [1,4,2,5,7,3,8]

product = reduce(lambda x,y: x*y, list(map(lambda x : x*1, list_of_num)))

print(product)