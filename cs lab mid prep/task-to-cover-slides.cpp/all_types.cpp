#include <iostream>
using namespace std;

// ======= 1. Single Inheritance =======
class Animal {
public:
    void eat() {
        cout << "I can eat" << endl;
    }
};

// Dog inherits from Animal (Single Inheritance)
class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark" << endl;
    }
};

// ======= 2. Multiple Inheritance =======
class Bird {
public:
    void fly() {
        cout << "I can fly" << endl;
    }
};

// Parrot inherits from both Animal and Bird (Multiple Inheritance)
class Parrot : public Animal, public Bird {
public:
    void speak() {
        cout << "I can mimic sounds" << endl;
    }
};

// ======= 3. Multilevel Inheritance =======
class Mammal : public Animal {
public:
    void walk() {
        cout << "I can walk" << endl;
    }
};

// Human inherits from Mammal, which inherits from Animal (Multilevel Inheritance)
class Human : public Mammal {
public:
    void speak() {
        cout << "I can speak" << endl;
    }
};

// ======= 4. Hierarchical Inheritance =======
// when two class are derived from 
class Cat : public Animal {
public:
    void meow() {
        cout << "I can meow" << endl;
    }
};

// ======= 5. Hybrid Inheritance =======
// when two bases are inherited in a class
class Student {
public:
    void study() {
        cout << "I am studying" << endl;
    }
};

// Employee inherits from Human (Multilevel Inheritance)
class Employee : public Human {
public:
    void work() {
        cout << "I am working" << endl;
    }
};

// WorkingStudent inherits from both Employee and Student (Hybrid Inheritance)
class WorkingStudent : public Employee, public Student {
public:
    void multitask() {
        cout << "I can work and study at the same time" << endl;
    }
};

// ======= Main function to test all inheritance types =======
int main() {
    cout << "===== Single Inheritance =====" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\n===== Multiple Inheritance =====" << endl;
    Parrot p;
    p.eat();
    p.fly();
    p.speak();

    cout << "\n===== Multilevel Inheritance =====" << endl;
    Human h;
    h.eat();
    h.walk();
    h.speak();

    cout << "\n===== Hierarchical Inheritance =====" << endl;
    Cat c;
    c.eat();
    c.meow();

    cout << "\n===== Hybrid Inheritance =====" << endl;
    WorkingStudent ws;
    ws.eat();       // From Animal (via Human)
    ws.walk();      // From Mammal
    ws.speak();     // From Human
    ws.work();      // From Employee
    ws.study();     // From Student
    ws.multitask(); // From WorkingStudent

    return 0;
}
