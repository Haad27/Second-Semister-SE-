import pandas as pd
import matplotlib.pyplot as plt

# sample data
data = {
    'Date': ['2024-01', '2024-02', '2024-03', '2024-04', '2024-05'],
    'Inflation': [2.1, None, 1.9, 2.0, 2.2]
}

# Converting to DataFrame
df = pd.DataFrame(data)

# Convert 'Date' column to datetime
df['Date'] = pd.to_datetime(df['Date'])

# Fill missing values
df['Inflation'] = df['Inflation'].fillna(df['Inflation'].mean())

# Plot line graph
plt.plot(df)
plt.ylabel("Inflation (%)")
plt.xlabel("Date")
plt.title("Inflation Over Time")
plt.grid(True)
plt.show()
