# **Product of List**: Use `reduce` to find the product of a list of numbers.from functools import reduce

from functools import reduce

listofNum = [2,4,9]

sum = reduce(lambda x, y : x*y, listofNum)

print(sum)