student_scores = {
    "Alice": 95,
    "Bob": 87,
    "Charlie": 78,
    "David": 92,
    "Eve": 88
}

def find_max_marks(stud_score: dict):
    return max(zip(stud_score.values(), stud_score.keys()))

topper = find_max_marks(student_scores)

print(f"student_name= {topper[1]}, score= {topper[0]}")