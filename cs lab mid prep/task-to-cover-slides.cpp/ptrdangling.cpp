#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
  

    int* ptr = new int(10);  // Dynamically allocate memory
    delete ptr;  // Memory freed
    ptr = nullptr;  // Safe (Prevents accessing freed memory)
    cout << *ptr;

    return 0;
}
