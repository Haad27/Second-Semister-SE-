#include <iostream>
#include <string>
#include <vector>

using namespace std;


int no(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}

int main() {
  // Direct XOR of all numbers from 1 to n
  int n = 6;

    int result = no(n);
    
    cout << "XOR of numbers from 1 to " << n << " is: " << result << endl;
    
    return 0;
}
