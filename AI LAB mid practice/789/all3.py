import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# Step 1: Data Setup
days = ['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat', 'Sun']
temps_celsius = np.array([22, 24, 19, 21, 23, 25, 20])

# Step 2: Convert to Fahrenheit using NumPy
temps_fahrenheit = temps_celsius * 9/5 + 32

# Step 3: Create DataFrame
df = pd.DataFrame({
    'Day': days,
    'Celsius': temps_celsius,
    'Fahrenheit': temps_fahrenheit
})

# Step 4: Plot both
plt.plot(df['Day'], df['Celsius'], label='Celsius', marker='o')
plt.plot(df['Day'], df['Fahrenheit'], label='Fahrenheit', marker='x')
plt.title("Daily Temperatures")
plt.xlabel("Day")
plt.ylabel("Temperature")
plt.legend()
plt.grid(True)
plt.show()
