#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
  
  int * ptr = new int;
  delete ptr;
  *ptr = 10;

  cout << "value of denamic allocated vallue is == " << *ptr;
  
    return 0;
}
