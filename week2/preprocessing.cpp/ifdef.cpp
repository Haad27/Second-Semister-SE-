// C++ program to demonstrate the use of #ifdef and #ifndef
// preprocessor directives.

#include <iostream>
using namespace std;
#define HELLO

int main()
{
    #ifdef HELLO
        cout << "it is defined ";
    #else
        cout << "not defined ";
    #endif

    #ifdef BYE
        cout << "it is defined ";
    #else
        cout << "it is not defined ";
    #endif

    return 0;
}