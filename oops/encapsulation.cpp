#include <iostream>
#include <string>
#include <vector>

using namespace std;
class employee
{

private:
    int salary = 90;

public:
    void getsalary()
    {

        cout << salary;
    }
    int setsalary()
    {
        cin >> salary;
        return salary;
    }
};

int main()
{
    employee emp;
    cout << emp.setsalary();

    return 0;
}
