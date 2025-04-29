#include <iostream>
using namespace std;

class Animal {
public:
    void sound(string x) {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() { // This overrides the base class function
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();  // Output: Dog barks

    Animal a;
    a.sound("hello");  // Output: Animal makes a sound
}
