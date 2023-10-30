INR = 82
USD = 1
def convertInrUsd(amount:float, currency1:str, currency2:str):
    if currency1.lower() == 'inr':
        return (USD/INR)*amount
    elif currency1.lower() == 'usd':
        return INR*USD*amount

print(convertInrUsd(82,'inr', 'usd'))