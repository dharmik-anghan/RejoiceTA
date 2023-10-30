# Expense Splitter: Design an app that helps split expenses evenly among a group of people. 
    splityourBills(amount, countPerson):
    if countPerson == 0:
        return print("You Can't Enter Zero Person")
    return amount/countPerson

splitedAmount = splityourBills(250,0)
print(splitedAmount)