#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Base
{
public:
int base;
    virtual void show()
    {
        cout << "Base class " << base<<endl;
    }
};
class Derived : public Base
{
public:
    int derived=78;
    void show()
    {
        cout << "Derived Class " <<derived<<endl;
        cout << "base " <<base <<endl;
    }
};
class Derivedplus : public Derived
{
public:
    int derived;
    void show()
    {
        cout << "Derived Class plus " <<derived<<endl;
        cout << "base " <<base <<endl;
    }
};


    int main()
{
    
        Base* basePtr;
    
        Derived c;
        c.derived = 233;
        c.base = 45;
    
        Derivedplus e;
        e.derived = 999;
        e.base = 888;
    
        basePtr = &c;
        basePtr->show(); // ✅ This will call Derived::show()
    
        basePtr = &e;
        basePtr->show(); // ✅ This will call Derivedplus::show()
    
    
    


    // can also be done in this way 

    // Base b;   // Base class pointer
    // Derived d; // Derived class object
    // b = d;
    // b.show(); // Late Binding Ocuurs

    return 0;
}
