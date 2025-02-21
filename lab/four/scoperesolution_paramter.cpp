#include <iostream>
#include <string>
#include <vector>

using namespace std;
class person{
    public:
    string name;
    int age;
  

};

class personson : public person {
    public:
    int grandfathername;
};

int main() {
  
   personson x;
   x.grandfathername = 34;
   x.age =34;
  
    return 0;
}

