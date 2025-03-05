class BankAccount:
    def __init__(self,balance):
        self.balance=balance
    def deposit(self,amount):
        self.balance += amount
        print(f"Deposited {amount}. New balance: {self.balance}")
    def get_balance(self):
        return self.balance
    
account = BankAccount(10000)
account.deposit(34)

print(account.get_balance())