# 11. **Filter Positive Numbers**: Use `filter` to get all positive numbers from a list.

listofNum = [-12,34,-53,33,-73,57]

positiveNum = list(filter(lambda x : x > 0, listofNum))

print(positiveNum)