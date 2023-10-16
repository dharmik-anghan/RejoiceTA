student_scores = {
    "Alice": 95,
    "Bob": 87,
    "Charlie": 78,
    "David": 92,
    "Eve": 88
}

def sort_dict(stud_dict: dict):
    sorted_list = sorted(stud_dict, key=(lambda k:stud_dict.keys()))

    sorted_dict = {}
    for i in sorted_list:
        sorted_dict.update({i: stud_dict[i]})
    return sorted_dict

print(sort_dict(student_scores))