def finacai ( n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return finacai(n-1) + finacai(n-2)

x = int(input("Enter a number: "))
print(finacai(x))

print(".............")

for i in range(x):
    print(finacai(i+1))
