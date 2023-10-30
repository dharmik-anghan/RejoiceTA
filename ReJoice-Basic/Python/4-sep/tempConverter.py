# Temperature Converter: Create a function to convert temperatures between Celsius and Fahrenheit.

def ctoF(num):
    return (num*(9/5)+32)

def ftoC(num):
    return ((num-32)*(5/9))

print(ctoF(0))
print(ftoC(32))