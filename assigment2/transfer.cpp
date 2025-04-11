#include <iostream>
#include <string>
#include <vector>

using namespace std;
class account {
    
    int balance;
    int account;
    string name;
 
    public:
    void withdrraw(){
        int amount;
        cout << "enter the amount you want to withdraw\n";
        cin >> amount;

        if (balance > amount)
        {
             balance = balance - amount;
        }
        

    }
    account(string name, int balance, int account){
        this->name = name;
        this->balance = balance;
        this->account = account;
    }
    void deposit(){
        int amount;
        cout << "enter the amount you want to deposit\n";
        cin >> amount;
        balance = balance + amount;
    }
    void show(){
        cout << "your balance is " << balance << endl;
    
        cout << "your account number is " << account << endl;
        cout << "your name is " << name << endl;
    }
   
};

int main() {
  int account,balance ;
  
  string name;
  for (int i = 0; i < 2; i++)
  {
    cout << "entername balance and account\n";
    cin >> name >> balance >> account;
    account a[i] (name, balance, account);
  }
  cout << "do you want to tranfer\n";
  cout <<"enter you account number";
  cin >> account;
  if (account == a[0].account)
  {
    a[0].withdrraw();
    a[1].deposit();
    

  }
  else if (account == a[1].account)
  {
    a[1].withdrraw();
    a[0].deposit();
  }
  a[0].show();
  a[1].show();
  
    return 0;
}
