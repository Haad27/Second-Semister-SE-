import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# Step 1: Create the DataFrame
data = {
    'Month': ['Jan', 'Feb', 'Mar', 'Apr', 'May'],
    'Units_Sold': [250, 300, 400, 350, 450],
    'Unit_Price': [10, 12, 11, 13, 12]
}

df = pd.DataFrame(data)

# Step 2: Use NumPy to calculate Total Revenue
df['Total_Revenue'] = np.array(df['Units_Sold']) * np.array(df['Unit_Price'])

# Step 3: Plot Total Revenue
plt.plot(df['Month'], df['Total_Revenue'], marker='o')
plt.title("Monthly Total Revenue")
plt.xlabel("Month")
plt.ylabel("Revenue (Rs.)")
plt.grid(True)
plt.show()
