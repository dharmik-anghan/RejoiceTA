# Grocery List Total: Given a dictionary of grocery items and their prices, calculate the total cost of a shopping list.

groceryList = {
    "ram" : 2000,
    "keyboard" : 1400,
    "mouse" : 300,
    "airpods" : 5000,
    "adapter" : 150
}

shoppingList = ['ram', 'mouse', 'airpods']

totalCost = 0

for item in shoppingList:
    totalCost += groceryList[item]

print(f"Total Cost of your shopping is {totalCost}")