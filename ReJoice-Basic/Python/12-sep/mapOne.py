# 4. **Square a List**: Use `map` to square each item in a list.
def sq(listof):
    if listof >= 50:
        return listof*listof

listofNum = [12,34,53,33,73,12,57]

listofNum2 = list(map(sq, listofNum))

print(listofNum2)
