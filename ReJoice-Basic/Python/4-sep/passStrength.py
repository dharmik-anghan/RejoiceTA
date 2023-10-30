# Password Strength Checker: Determine the strength of a password based on criteria such as length, special characters, and numbers.

from tokenize import Special


def printStrongNess(password:str):
     
    n = len(password)
 
    # Checking lower alphabet in string
    hasLower = False
    hasUpper = False
    hasDigit = False
    specialChar = False
    normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 "

    for i in range(n):
        if password[i].islower():
            hasLower = True
        if password[i].isupper():
            hasUpper = True
        if password[i].isdigit():
            hasDigit = True
        if password[i] not in normalChars:
            specialChar = True
    
    print("Strength of Password:-", end=" ")

    if (hasLower and hasUpper and hasDigit and specialChar and n >= 8):
        print("Strong")
    elif ((hasLower or hasUpper) and specialChar and n>=6):
        print("Moderate")
    else:
        print("Weak")

printStrongNess('Drk!65')