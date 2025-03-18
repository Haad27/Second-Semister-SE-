def divide (x , y):
    if y == 0:
        return "Error: Division by zero is not allowed!"
    else:
        return (x / y , x % y)

x = int(input("Enter a number: "))
y = int(input("Enter a number: "))

print(divide(x, y))

