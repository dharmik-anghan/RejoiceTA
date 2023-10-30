# 15. **Sum of Squares**: Use `map` and `reduce` to find the sum of the squares of a list of numbers.

from functools import reduce

listofNum = [2,3,8,10,7,13,6]

sumofSquares = reduce(lambda x, y: x+y, map(lambda x : x*x, listofNum))

print(sumofSquares)