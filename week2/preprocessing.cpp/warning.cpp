// C++ program to demonstrate the use of #warning
// preprocessor directive.
#include <iostream>
using namespace std;

// not defining it to trigger the warning
//#define PI 3.14

#ifndef PI
// has to be in ifndef is not then warning will do nothing
#warning "PI is not defined!"
#endif

int main()
{
    cout << "Hey! geek" << endl;
    return 0;
}