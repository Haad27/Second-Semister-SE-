// C++ program to demonstrate the use of #ifdef and #ifndef
// preprocessor directives.

#include <iostream>
using namespace std;
#define HELLO

int main()
{
    // this can tell before compiling if it is true or not 
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
// #include <iostream>
// using namespace std;

// // Using preprocessor directive
// #define HELLO

// int main() {
//     // Version 1: Using preprocessor directives
//     #ifdef HELLO
//         cout << "HELLO is defined" << endl;
//     #else
//         cout << "HELLO is not defined" << endl;
//     #endif

//     // Version 2: Using regular if-else
//     bool isHelloDefined = true;
//     if (isHelloDefined) {
//         cout << "HELLO is defined" << endl;
//     } else {
//         cout << "HELLO is not defined" << endl;
//     }

//     return 0;
// }
