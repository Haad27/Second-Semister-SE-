#include <iostream>
using namespace std;

// means to hVE PRIVATE in class

class Employee
{
private:
    // Private attribute
    int salary;

public:
    int number(int s)
    {
        salary = s;
        cout << "salary is " << salary << endl;
    }
};

int main()
{
    Employee myObj;
    myObj.number(50000);
    // cout << myObj.getSalary();
    return 0;
}