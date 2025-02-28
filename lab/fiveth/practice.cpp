#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
private:
    int rollno;
    int age;
    string name;
public:
    Student(int rollno, int age, string name)
    {
        this->rollno = rollno;
        this->age = age;
        this->name = name;
    };
    void display()
    {
        cout << "Roll no: " << rollno << endl;
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
    }
};
int main()
{
    Student s1(1, 20, "John");
    s1.display();

    return 0;
}
