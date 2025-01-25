#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct times
{
    int week;
    int year;
};

int main()
{

    times t;
    times *ptr =&t;

    cout << "enter the time \n";
    cin >> t.week;

    cout << "enter the year ";
    cin >> ptr->year;
    cout << t.week << ptr ->year; 
    return 0;
}
