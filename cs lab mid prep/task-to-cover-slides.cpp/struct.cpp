#include <iostream>
using namespace std;

// Define a struct
struct Person {
    string name;
    int age;
};

// Function that takes a struct as a parameter
void displayPerson(Person p) {
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
}

int main() {
    // Create a struct object
    Person person1 = {"Alice", 25};

    // Call function with struct as an argument
    displayPerson(person1);

    return 0;
}
