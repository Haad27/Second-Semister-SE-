#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountNO;
    string name;
    double balance;
    string type;

public:
    // Default constructor
    BankAccount() : accountNO(""), name(""), balance(100), type("Savings") {}

    // Parameterized constructor
    BankAccount(string accNo, string accName, double accBalance, string accType)
    {
        accountNO = accNo;
        name = accName;
        balance = (accBalance >= 100) ? accBalance : 100;
        type = (accType == "Savings" || accType == "Checking") ? accType : "Savings";
    }

    // Copy constructor
    BankAccount(const BankAccount &other)
    {
        accountNO = other.accountNO;
        name = other.name;
        balance = other.balance;
        type = other.type;
    }

    // Method to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
        display();
    }

    // Method to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && balance - amount >= 100)
        {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        }
        else
        {
            cout << "Invalid withdraw amount or insufficient balance!" << endl;
        }
        display();
    }

    // Method to display account details
    void display() const
    {
        cout << "Account Number: " << accountNO << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Account Type: " << type << endl;
    }
};

int main()
{
    // Creating objects using different constructors
    BankAccount account1;
    BankAccount account2("123456", "John Doe", 500, "Checking");
    BankAccount account3 = account2;

    // Displaying account details
    account1.display();
    account2.display();
    account3.display();

    // Performing transactions
    account2.deposit(200);
    account2.withdraw(100);

    return 0;
}