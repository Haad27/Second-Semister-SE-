#include <iostream>
#include <string>
#include <vector>

using namespace std;

union Bitwise_data
{
    unsigned int integar;
    unsigned char character[4];
};


int main() {
  
 Bitwise_data bitwise;
 int value ;
 cout << "enter the value" << endl;
 cin >> value;
 bitwise.integar = value;
  
  for (int i = 0; i < 4; i++)
 {
    cout << int(bitwise.character[i]) << endl;
 }

    return 0;
}
