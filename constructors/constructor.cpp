#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
Create a class 'Student' that manages student information with the following requirements:

1. Create private data members for:
   - Name (string)
   - Roll Number (int)
   - Marks in 3 subjects (float)

2. Implement the following:
   - A constructor to initialize student details
   - A method to calculate average marks
   - A method to display student information
   - A method to check if the student has passed (average > 40)

3. Create at least two student objects and demonstrate all functionalities

Bonus: Add input validation (marks should be between 0 and 100)
*/

// Start your code here
class student
{
private:
    string name;

    int RollN;
    float marks[3];

public:
    student(string n, int roll, float m1, float m2, float m3)
    {
        
        name = n;
        RollN = roll;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;

    }
    float avergae()
    {
        return (marks[0] + marks[1] + marks[2]) / 3.0;
    }
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << RollN << endl;
        cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        cout << "Average: " << avergae() << endl;
    }
    bool hasPassed()
    {
        return avergae() > 40;
    }
};
int main()
{
    student student1("John", 101, 75.5, 80.0, 85.5);
    student student2("Alice", 102, 35.0, 42.0, 38.0);

    cout << "Student 1 Information:" << endl;
    student1.displayInfo();
    cout << "Pass Status: " << (student1.hasPassed() ? "Passed" : "Failed") << endl;

    cout << "\nStudent 2 Information:" << endl;
    student2.displayInfo();
    cout << "Pass Status: " << (student2.hasPassed() ? "Passed" : "Failed") << endl;

}
