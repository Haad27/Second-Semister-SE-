#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Base
{
public:
    virtual void show()
    {
        cout << "Base class\n";
    }
};
class Derived : public Base
{
    public:
    void show()
    {
        cout << "Derived Class";
    }
};

    int main()
{
    Base *b;   // Base class pointer
    Derived d; // Derived class object
    b = &d;
    b->show(); // Late Binding Ocuurs

    // can also be done in this way 

    // Base b;   // Base class pointer
    // Derived d; // Derived class object
    // b = d;
    // b.show(); // Late Binding Ocuurs

    return 0;
}
