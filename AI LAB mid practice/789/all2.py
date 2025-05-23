import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
# Step 1: Data Setup
names = np.array(['Ali', 'Sara', 'John', 'Ayesha'])
scores = np.array([
    [85, 90, 88],
    [78, 75, 80],
    [92, 95, 91],
    [70, 72, 68]
])

# Step 2: Create DataFrame
df = pd.DataFrame(scores, columns=['Math', 'Science', 'English'])
df['Name'] = names

# Step 3: Calculate average using NumPy
df['Average'] = np.mean(scores)

# Step 4: Plot
plt.bar(df['Name'], df['Average'], color='skyblue')
plt.title("Student Average Scores")
plt.xlabel("Student")
plt.ylabel("Average Score")
plt.grid(axis='y')
plt.show()
