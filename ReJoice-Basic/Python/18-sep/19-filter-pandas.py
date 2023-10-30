# 19. **Filtering Data with Pandas**
#   Filter rows in a Pandas DataFrame based on multiple conditions using logical operators.

import pandas as pd

csv_data = pd.read_csv("C:/Users/dharm/nba.csv")
csv_data = csv_data[["Name", "Team", "Salary"]]

csv_data.dropna(inplace=True)

filtered_data  = csv_data.loc[(csv_data["Team"] == "Utah Jazz") & (csv_data["Salary"] > 1200000.0)]

print(csv_data)
print(filtered_data)