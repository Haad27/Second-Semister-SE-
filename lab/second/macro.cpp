#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define MACRO 80

int main() {
  
  for (int i = 0; i < MACRO; i++)
  {
    cout << i <<endl;
  }
  
  #ifdef MACRO
    cout << "it is defined\n";
  #endif

  
  
    return 0;
}
