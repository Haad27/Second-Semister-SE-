class BankAccount:
    # making methods
    def __init__(self ):
        self.__balance = 1000 
        
    def deposit(self,amount):
        self.__balance+=amount
    def withdraw(self,amount):
        # checking for error handling
      if amount>self.__balance:
        print("Insufficient balance")
      else:
         self.__balance-=amount
    def getbalance(self):
        return self.__balance
    # calling class and functions
account=BankAccount()
print(f"Initial Balance: {account.getbalance()}")
account.deposit(500)
print(f"Current Balance: {account.getbalance()}")
account.withdraw(200)
print(f"Remaining Balance: {account.getbalance()}")

