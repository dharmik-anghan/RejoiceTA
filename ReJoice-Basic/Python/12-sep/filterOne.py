# 10. **Filter Even Numbers**: Use `filter` to get all even numbers from a list.

listofNum = [12,34,53,33,73,12,57]

evenNum = list(filter(lambda x : x%2 == 0, listofNum))

print(evenNum)