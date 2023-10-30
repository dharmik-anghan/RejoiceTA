# Budget Tracker: Create a budget tracker that calculates expenses, income, and displays the remaining budget.

def budgetTraker(income:float,expenses:float):
    return print(f"You have budget of {income-expenses}") if income >= expenses else print(f"you hold borrowed {income-expenses}")

budgetTraker(30000, 10000)