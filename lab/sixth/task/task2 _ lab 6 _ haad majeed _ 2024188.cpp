#include <iostream>
using namespace std;

class BankAccount {
private:
    const int accountNumber;  // Constant account number
    static double balance;    // Shared balance for all accounts

public:
    // Constructor using member initializer list (Required for const variables)
    BankAccount(int accNum) : accountNumber(accNum) {}

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Function to print balance
    void showBalance() {
        cout << "Current Balance: $" << balance << endl;
    }

    // Function to print account details
    void showAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        showBalance();
    }
};

// Initialize static balance variable
// we must intialise the static int outside the class
double BankAccount::balance = 0.0;
class Customer {
private:
    string name;
    BankAccount account;  // Direct object, must initialize in constructor

public:
    // Constructor using member initializer list
    Customer(string custName, int accNum) : name(custName), account(accNum) {}

    // Deposit money
    void depositMoney(double amount) {
        cout << name << " is depositing money...\n";
        account.deposit(amount);
    }

    // Withdraw money
    void withdrawMoney(double amount) {
        cout << name << " is withdrawing money...\n";
        account.withdraw(amount);
    }

    // Show customer details
    void showCustomerDetails() {
        cout << "Customer Name: " << name << endl;
        account.showAccountDetails();
    }
};

// Main function
int main() {
    Customer c1("Alice", 101);
    c1.depositMoney(500);  
    c1.withdrawMoney(200); 
    c1.showCustomerDetails();

    Customer c2("Bob", 102);
    c2.depositMoney(300);  
    c2.withdrawMoney(100); 
    c2.showCustomerDetails();

    return 0;
}
