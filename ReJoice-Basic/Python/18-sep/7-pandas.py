# 7. **Pandas DataFrame Creation**
#   Read a CSV file into a Pandas DataFrame and display its first 5 rows.

import pandas as pd

csv_data = pd.read_csv("C:/Users/dharm/nba.csv")

print(csv_data['Name'].head())