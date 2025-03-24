#include <iostream>
using namespace std;

// Define an enum for months
enum MonthType { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    MonthType month;

    // Loop through all months
    for (month = JAN; month <= DEC; month = MonthType(month + 1)) {
        cout << "Month number: " << month << endl;
    }

    return 0;
}
