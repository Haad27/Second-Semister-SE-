#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog d;
    d.sound();  // Output: Dog barks

    Cat c;
    c.sound();  // Output: Cat meows

    // Animal a; ❌ Not allowed! Animal is abstract
}
