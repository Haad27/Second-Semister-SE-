#include <iostream>
#include <string>
#include <vector>

using namespace std;

//creating class of bank account
class bankaccount
{
private:
    int account_number;
    int balance;

public:
// making counstror
    bankaccount(int a, int b)
    {
        account_number = a;
        balance = b;

        cout << "Account " << account_number << " created with balance " << balance << "\n";
     }
     //making a  distructor
    ~bankaccount()
    {
        cout << "Account " << account_number << " closed\n";
    }
};

int main()
{
    //declaring them
    bankaccount a1(1, 1000);
    bankaccount a2(2, 2000);
    bankaccount a3(3, 3000);

    return 0;
}
