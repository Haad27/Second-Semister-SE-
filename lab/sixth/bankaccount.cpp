

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    const string accountNumber;
    static double balance;  // static balance shared across all accounts

public:
    BankAccount(string accNum, double initialBalance = 0) : accountNumber(accNum) {
        balance = initialBalance;
    }

    bool deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            return true;
        }
        return false;
    }

    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    double getBalance() const {
        return balance;
    }

    string getAccountNumber() const {
        return accountNumber;
    }
};

// Initialize static member
double BankAccount::balance = 0;

class Customer {
private:
    string name;
    BankAccount* account;

public:
    Customer(string customerName, string accountNumber, double initialBalance = 0) {
        name = customerName;
        account = new BankAccount(accountNumber, initialBalance);
    }

    ~Customer() {
        delete account;  // Cleanup to prevent memory leak
    }

    string getName() const {
        return name;
    }

    bool deposit(double amount) {
        return account->deposit(amount);
    }

    bool withdraw(double amount) {
        return account->withdraw(amount);
    }

    double getBalance() const {
        return account->getBalance();
    }

    string getAccountNumber() const {
        return account->getAccountNumber();
    }
};

int main() {
    // Create a customer with initial balance of 1000
    Customer customer("John Doe", "ACC001", 1000);

    // Print initial details
    cout << "Customer Name: " << customer.getName() << endl;
    cout << "Account Number: " << customer.getAccountNumber() << endl;
    cout << "Initial Balance: $" << customer.getBalance() << endl;

    // Perform some transactions
    cout << "\nDepositing $500..." << endl;
    customer.deposit(500);
    cout << "New Balance: $" << customer.getBalance() << endl;

    cout << "\nWithdrawing $300..." << endl;
    customer.withdraw(300);
    cout << "New Balance: $" << customer.getBalance() << endl;

    // Try to withdraw more than balance
    cout << "\nTrying to withdraw $2000..." << endl;
    if (!customer.withdraw(2000)) {
        cout << "Withdrawal failed - Insufficient funds" << endl;
    }
    cout << "Final Balance: $" << customer.getBalance() << endl;

    return 0;
}
