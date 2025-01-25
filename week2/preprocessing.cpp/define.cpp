#include <iostream>
#include <string>
#include <vector>

using namespace std;


#define PI 3.14  // Remove semicolon, use capital letters for constants
#define FINDSQUARE(x) ((x)*(x))  // Correct macro syntax with proper parentheses


int main() {
     int y;
 cout << "enter the value ";
 cin >> y;
 cout << FINDSQUARE(y);
    return 0;
}

