#include <iostream>
#include <string>
#include <vector>

using namespace std;
class base{
    public :
    virtual void hello(){
        cout <<"base classs";
    }
};
class derived :public base{
    public:
    void hello() {
        cout <<"derived vlass\n";
    }
};

int main() {
  
base *b;
derived d;
b=&d;

b->hello();
  
    return 0;
}
