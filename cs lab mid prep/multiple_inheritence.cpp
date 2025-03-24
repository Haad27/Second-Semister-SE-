#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    void speak() {
        cout << "Some generic animal sound" << endl;
    }
};

// Base class 2
class Bird {
public:
    void fly() {
        cout << "I can fly" << endl;
    }
};

// Derived class inheriting from both Animal and Bird
class Parrot : public Animal, public Bird {
public:
    void speak() {  // Overriding speak() method
        cout << "I can mimic sounds" << endl;
    }
};

int main() {
    Parrot p;
    p.speak();  // Calls overridden method in Parrot
    p.fly();    // Calls method from Bird

    return 0;
}
