# 13. **Lambda with Sorting**
#   Sort a list of strings based on their length using lambda functions.

list_of_string = ["dharmik", "keval", "isha", "nisha", "disha"]

sorted_string = sorted(list_of_string, key = lambda x : len(x))

print(sorted_string)