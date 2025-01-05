#include <iostream>
#include <string>
#include <vector>

using namespace std;

class parent {
    public:
    void main(){

    cout << "this is in parengt content\n";
    }
};
class child : public parent {

};
class grandchild : public child {

};

int main() {
  
grandchild myobj;

myobj.main();
  
    return 0;
}
