# 16. **Chaining**: Use `map`, `filter`, and `reduce` together to square numbers, filter out odd squares, and sum the rest.

from functools import reduce

listofNum = [2,3,8,10,7,13,6]

chaining = reduce(lambda x,y:x+y,list(filter(lambda x: x%2 == 0, map(lambda x:x*x, listofNum))))
print(chaining)