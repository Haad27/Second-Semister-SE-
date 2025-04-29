#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BaseClass{ 
    public: 
        int var_base; 
        void display(){ 
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl; 
        } 
}; 
class DerivedClass : public BaseClass{ 
    public: 
            int var_derived; 
            void display(){ 
                cout<<"Displaying Base class variable var_base "<<var_base<<endl; 
                cout<<" Displaying Derived class variable var_derived "<<var_derived<<endl; 
            } 
}; 
int main(){ 
    BaseClass * base_class_pointer;  //pointer of the data type “BaseClass” 
    
    DerivedClass obj_derived; 
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class 
 
    base_class_pointer->var_base = 34; 
       // base_class_pointer->var_derived= 134; // Will throw an error because you can access 
// only those which are derived from base class 
base_class_pointer->display(); 

base_class_pointer->var_base = 3400;  
base_class_pointer->display(); 

DerivedClass * derived_class_pointer; 
derived_class_pointer = &obj_derived; 
derived_class_pointer->var_base = 9448; 
derived_class_pointer->var_derived = 98; 
derived_class_pointer->display(); 

return 0; 
} 