// C++ program to demonstrate the use #error preprocessor
// directives.

#include <iostream>
using namespace std;

// not defining PI here
#define PI 3.14159 // if we dont do tis then the error will be marked as red

int main()
{
#if defined(PI)
    cout << "PI is defined" << endl;
#else
#error "Neither PI nor SQUARE is defined"
#endif

    return 0;
}