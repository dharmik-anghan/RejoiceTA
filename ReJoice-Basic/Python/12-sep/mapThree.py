# 6. **Length of Strings**: Use `map` to find the length of each string in a list.

# 5. **Convert to Uppercase**: Convert all strings in a list to uppercase.

listofStr = ['dharmik', 'darshan', 'smit', 'het']

length = list(map(lambda string : len(string), listofStr))

print(length)