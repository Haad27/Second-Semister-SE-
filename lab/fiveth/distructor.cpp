#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
private:
    string name;
    int id;

public:
    Student(string n, int i)
    {
        name = n;
        id = i;
        cout << "Creating student: " << name << endl;
    }

    ~Student()
    {
        cout << "Destroying student: " << name << endl;
    }

    void display()
    {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main()
{

    Student s1("Alice", 101);
    s1.display();

    Student s2("Bob", 102);
    s2.display();


    s1.display();
    s1.display();
    s1.display();
    return 0;
}
