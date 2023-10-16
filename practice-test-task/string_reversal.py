def rev_string(string: str):
    return string[::-1]

string = """
Some 1.1 million people - nearly half the population of 2.4 million - live in the north of Gaza, and aid groups have said forcing them to move is an impossibility as the war rages. With food, water, fuel and medical supplies running low because of an Israeli blockade, aid agencies are warning of an impending humanitarian crisis in Gaza. UN Secretary-General Antonio Guterres described the situation in Gaza as "a dangerous new low".
"""

print(rev_string(string))