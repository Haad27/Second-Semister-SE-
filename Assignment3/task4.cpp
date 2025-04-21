#include <iostream>
#include <string>
using namespace std;
//base class
class employee {  
public:
    int employeeid = 393939;

    void display() {
        cout << "Employee ID: " << employeeid << endl;
    }
};
//making them empty bec we are doing this to understand the immporttance of virtual class
class manager : virtual public employee {  
};

class engineer : virtual public employee {  
};
//now this is a diamound structure and it is calling both of above fuctnion and because of virtual it is not cauing ambiguity
class techleads : public engineer, public manager {  
public:
    void display() {
        employee::display();  
    }
};

int main() {
    //calling the  end of daimound structure cclass
    techleads s1;  

    s1.display();  

    return 0;
}
