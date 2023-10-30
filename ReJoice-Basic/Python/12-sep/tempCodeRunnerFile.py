from functools import reduce

listofNum = [12,34,53,33,73,12,57]

sum = reduce(lambda x, y : x+y, listofNum)

print(sum)