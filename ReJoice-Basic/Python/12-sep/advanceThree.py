# 18. **Reverse a String**: Use `reduce` to reverse a string.

from functools import reduce


string = 'dharmik'

revStr = reduce(lambda x,y: y+x, string)

print(revStr)