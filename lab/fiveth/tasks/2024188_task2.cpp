#include <iostream>
#include <string>

using namespace std;
//making a class of studentt
class Student {
private:
    int age;
    string name;
//making constuctor
public:
    Student(int a, string b) {
        age = a;
        name = b;
        cout << "Student created: " << name << " Age: " << age << "\n";
    }
   //making a copy construcor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor: Copying " << name << " Age: " << age << "\n";
    }

    void display() {
        cout << "Student: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Original object
    Student s1(20, "Haad");
    
    //copies
    Student s2(s1);
    Student s3(s1);

    // Modify original object to check if copies are independent
    cout << "\nModifying original object\n";
    s1 = Student(25, "Ali"); 
   
    cout << "\nFinal Student Details\n";
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
