#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum TimeData 
{
    DAY,    // 0
    MONTH,  // 1
    WEEK    // 2
}; 

int main()
{
    // Declare variables of type TimeData
    TimeData t = DAY;    // You can only assign enum values
    
    // To store actual numeric values, you need separate variables
    int dayValue = 10;
    int monthValue = 3;
    int weekValue = 2;

    cout << "TimeData value: " << t << endl;  // Will print 0 for DAY
    
    // If you want to work with actual day/month/week values:
    switch(t) {
        case DAY:
            cout << "Day value: " << dayValue << endl;
            break;
        case MONTH:
            cout << "Month value: " << monthValue << endl;
            break;
        case WEEK:
            cout << "Week value: " << weekValue << endl;
            break;
    }

    return 0;
}
