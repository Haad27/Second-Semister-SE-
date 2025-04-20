#include <iostream>
using namespace std;

int main()
{
    string choice;
    cout << "enter";
    cin >> choice;
    int count = choice.length() -2;
  
   
    cout << choice[0];
    cout << count;
    cout << choice[count +1];
    return 0;
}
