number = 1211

number_str = str(number)

rev_number_str = number_str[::-1]

rev_number = int(rev_number_str)

if number == rev_number:
    print("Palindrom")
else:
    print("Not Plaindrom")