list_of_tuple = [
    (12,45),
    (1,35),
    (6,4),
    (4,55),
    (5,8),
    (3,1),
]

def sort_tuple(listOfT: list):
    return sorted(listOfT,key=lambda x: x[1])

sorted_list_of_tuple = sort_tuple(list_of_tuple)

print(sorted_list_of_tuple)