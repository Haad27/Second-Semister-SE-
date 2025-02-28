#include <iostream>
#include <string>
#include <vector>

using namespace std;
// making the class
class student
{
    //,making it oublic
public:
    string name;
    int roll;
    double marks;

    void set(string n, int r, int m);
    // another funxtion for grade
    void grade();
};
void student ::set(string n, int r, int m)
{
    name = n;
    roll = r;
    marks = m;
}
void student ::grade()
{
    cout << "name == " << name << " and roll number == " << roll << " ";
    if (marks <= 100 && marks >= 0)
    {
        if (marks >= 90)
        {
            cout << "grade A" << endl;
        }
        else if (marks >= 80)
        {
            cout << "grade B" << endl;
        }
        else if (marks >= 70)
        {
            cout << "grade C" << endl;
        }
        else if (marks >= 60)
        {
            cout << "grade D" << endl;
        }
        else if (marks >= 50)
        {
            cout << "grade F" << endl;
        }
    }
    else
    {
        cout << "invalid input of marks not possible" << endl;
    }
}
int main()
{
    // calling the class
    student students;

    students.set("ali", 1, 90);
    students.grade();

    students.set(" ahmed", 2, 80);
    students.grade();

    students.set(" John ", 9, 800);
    students.grade();

    return 0;
}
