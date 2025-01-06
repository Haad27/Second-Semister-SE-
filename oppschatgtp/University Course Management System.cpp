#include <iostream>
#include <string>
#include <vector>

using namespace std;
class person
{
public:
    string name;
    int id;
    int contact;
};
class students : public person
{
public:
    string major;
    int year_level;
    int gpa;
    int currentcourses;
    string enrolledStudents[30]; // Fixed size array
};

class professor : public person
{
public:
    string courseCode;
    string courseName;
    int credits;
    string instructor;
    int currentEnrollment;
    const int maxCapacity = 30;
};
int main()
{

    return 0;
}
