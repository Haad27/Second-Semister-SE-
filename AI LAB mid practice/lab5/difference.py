x=[3, 10, 6, 2, 8]

def diffrence(x):
    highest =0

    for i in range(len(x)):
        for j in range(i+1,len(x)):
            diff = (x[i] - x[j])  # Absolute difference
            if diff > highest:
                highest = diff  # Update highest difference
    return highest  # R
    
y=diffrence(x)
print(y)

# x = [3, 10, 6, 2, 8]

# max_diff = max(x) - min(x)

# print(max_diff)  # Output: 8
