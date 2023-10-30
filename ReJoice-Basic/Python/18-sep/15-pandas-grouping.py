# 15. **Pandas Grouping**
#   Group a Pandas DataFrame by a specific column and calculate the mean of another column within each group.

import pandas as pd

csv_data = pd.read_csv("C:/Users/dharm/nba.csv")
csv_data = csv_data[["Name", "Team", "Salary"]]

csv_data.dropna(inplace=True)

grouped_data = csv_data.groupby(by="Team").mean(numeric_only=True)

print(csv_data)
print(grouped_data)