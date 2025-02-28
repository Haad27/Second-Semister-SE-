#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct timetable
{
    int hour;
    int min;
    int sec;
};

void printmiliatey(timetable t);
void printcasual(timetable t);
int main()
{

    timetable t;
    t.hour = 90;
    t.min = 30;
    t.sec = 9222;

    cout << "dinner at miliary time\n";
    printmiliatey(t);
    cout << "dinner at miliary time\n";
    printcasual(t);

    return 0;
}

void printmiliatey(timetable t)
{
    cout << t.hour << ":" << t.min << ":" << t.sec << endl;
}
void printcasual(timetable t)
{
    cout << t.hour % 12 << ":" << t.min << ":" << t.sec;
    cout << (t.hour >= 12 ? " PM" : " AM") << endl;
}
