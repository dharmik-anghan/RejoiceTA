# 13. **Square and Filter**: Use `map` and `filter` to square the numbers and then filter out numbers greater than 50.

listofNum = [2,3,8,10,7,13,6]

greaterFifty = list(filter(lambda x: x >= 50,map(lambda x : x*x, listofNum)))

print(greaterFifty)