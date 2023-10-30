# 10. **Dictionary Sorting**
#   Sort a dictionary by its values in descending order.

unsorted_dict = {
    'p' : 12,
    'e' : 43,
    'z' : 15,
    'a' : 9,
    'y' : 78
}

sorted_dict = dict(sorted(unsorted_dict.items(), reverse=True))

print(sorted_dict)