# 12. **Filter with Pandas**
#   Filter rows in a Pandas DataFrame where a specific column meets a certain condition.

import pandas as pd

csv_data = pd.read_csv("C:/Users/dharm/nba.csv")

print(csv_data.loc[csv_data['Name'] == "John Holland"])