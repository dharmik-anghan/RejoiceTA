# 9. **Concatenate Strings**: Use `reduce` to concatenate a list of strings.

from functools import reduce


listofStr = ['I\'m ', 'Dharmik ', 'Anghan']

print(reduce(lambda a, b: a+  b, listofStr))