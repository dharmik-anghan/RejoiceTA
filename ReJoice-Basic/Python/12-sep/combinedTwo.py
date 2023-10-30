# 14. **Uppercase and Filter**: Convert strings to uppercase and then filter out strings that are more than 4 characters long.

listofStr = ['dharmik', 'darshan', 'smit', 'het']

filteredList = list(filter(lambda x: len(x) > 4, map(lambda x: x.upper(), listofStr)))

print(filteredList)