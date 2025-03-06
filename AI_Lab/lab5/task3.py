def divide(dividend, divisor):
    if divisor == 0:
        return "Error: Division by zero is not allowed!"
    
    quotient = dividend / divisor 
    remainder = dividend % divisor 
    
    return (quotient, remainder)  

dividend = int(input("Enter the dividend: "))  
divisor = int(input("Enter the divisor: "))  

result = divide(dividend, divisor)
print("Quotient and Remainder:", result)