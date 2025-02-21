#include <iostream>
#include <string>
#include <vector>

using namespace std;
class person{
    public:
    string name;
    int age;
  
    void display();
};

void person::display(){
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
};

int main() {
  

  
    return 0;
}

