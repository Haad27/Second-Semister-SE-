import pandas as pd
import numpy as np

# Sample dataset with missing values
info = {
    'Nation': ['Germany', 'France', 'India', 'Germany', 'India', np.nan],
    'Year': [2020, 2020, 2020, 2021, 2021, 2021],
    'Earnings': [60000, 52000, np.nan, 63000, 45000, 51000]
}

df = pd.DataFrame(info)

# Fill missing values in 'Earnings' with the column's mean
df['Earnings'] = df['Earnings'].fillna(df['Earnings'].mean())

# Drop rows with missing 'Nation'
df = df.dropna(subset=['Nation'])

print("Clean dataset:")
print(df)
print()

# Compute average earnings per nation
average_earnings = df.groupby('Nation')['Earnings'].mean().reset_index()

# Sort by average earnings and assign rank
sorted_earnings = average_earnings.sort_values(by='Earnings', ascending=False)
sorted_earnings['Position'] = sorted_earnings['Earnings'].rank(ascending=False)

print("Average earnings per nation with positions:")
print(sorted_earnings)
print()

# Reshape: rank as column headers, data transposed
reshaped = sorted_earnings.set_index('Position')[['Earnings', 'Nation']].T

print("Reshaped data (Position as column header):")
print(reshaped)
