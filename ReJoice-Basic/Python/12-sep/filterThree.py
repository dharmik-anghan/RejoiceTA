# 12. **Filter Non-Empty Strings**: Use `filter` to remove empty strings from a list.

listofStr = ["", "hi", "hello", "hey", "", "how r u?", ""]

nonEmptyStr = list(filter(lambda x : len(x)!=0, listofStr))

print(nonEmptyStr)