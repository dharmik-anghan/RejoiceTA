from math import sqrt
import pandas as pd
df = pd.read_csv("https://media.geeksforgeeks.org/wp-content/uploads/nba-2.csv")

df.dropna(inplace=True)

print(df.head())

mean_df = df['Salary'].mean()
median_df = df['Salary'].median()
std_df = df['Salary'].std()

print(f"\n\n Salary\n mean= {mean_df} \n median= {median_df} \n std= {std_df}")