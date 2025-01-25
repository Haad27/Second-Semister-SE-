#include <iostream>
#include <string>
#include <vector>

using namespace std;
    struct TimeData    // Changed name from 'time' to 'TimeData'
    {
        int day;
        int month;
        int week;
    };

int main()
{
    TimeData t, t1, t2;    // Use the new struct name

    t.day = 10;
    t2 = t;
    t.month = 3;
    t1 = t;
    t.week = 2;

    

    cout << t.day << " " << t.month << " " << t.week << endl;
    cout << t1.day << " " << t1.month << " " << t1.week << endl;
    cout << t2.day << " " << t2.month << " " << t2.week << endl;

    return 0;
}
