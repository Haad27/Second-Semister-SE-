#include <iostream>
#include <string>
#include <vector>

using namespace std;
class test {
    int num1 ;
    public:
    test(int num1) {
        this->num1 = num1;
    }
    test operator + (test &t) {
        return test(num1 + t.num1);
    }
}

int main() {
  

  
    return 0;
}
