set1 = {1,2,4,7,8,9,3,6}
set2 = {3,5,2,8,6,0,4}

def symmetric_diff(set1: set, set2: set):
    return set1.symmetric_difference(set2)

new_set = symmetric_diff(set1,set2)

print(new_set)