#include <iostream>
#include <string>
using namespace std;
//base class
class person {  
public:
    string name = "Ahmed";
    int age = 25;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
//dervied class
class student : public person {  
public:
    int Studentid = 2056388;

    void display_Student() {
        cout << "Student ID: " << Studentid << endl;
    }
};
//calling the derived class
int main() {
    student s1;

    s1.display_Student();
    s1.display();

    return 0;
}
