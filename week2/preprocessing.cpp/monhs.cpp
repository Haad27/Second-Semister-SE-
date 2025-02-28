#include <iostream>

using namespace std;

enum MonthType {
    JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    MonthType month;

    for (month = JAN; month <= DEC; month = MonthType(month + 1)) {
        switch (month) {
            case JAN: cout << "January" << endl; break;
            case FEB: cout << "February" << endl; break;
            case MAR: cout << "March" << endl; break;
            case APR: cout << "April" << endl; break;
            case MAY: cout << "May" << endl; break;
            case JUN: cout << "June" << endl; break;
            case JUL: cout << "July" << endl; break;
            case AUG: cout << "August" << endl; break;
            case SEP: cout << "September" << endl; break;
            case OCT: cout << "October" << endl; break;
            case NOV: cout << "November" << endl; break;
            case DEC: cout << "December" << endl; break;
        }
    }

    return 0;
}