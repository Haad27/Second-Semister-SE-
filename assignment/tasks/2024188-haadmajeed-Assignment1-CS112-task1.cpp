#include <iostream>

using namespace std;
//delare
enum VehicleType { CAR =1 , BIKE, BUS, TRUCK };

int main() {
    int choice;
    
    cout << "Enter vehicle type (1 for CAR, 2 for BIKE, 3 for BUS, 4 for TRUCK): ";
    cin >> choice;
//    /using switch statment
    switch (choice) {
        case CAR:
            cout << "Vehicle Type: CAR" << endl;
            break;
        case BIKE:
            cout << "Vehicle Type: BIKE" << endl;
            break;
        case BUS:
            cout << "Vehicle Type: BUS" << endl;
            break;
        case TRUCK:
            cout << "Vehicle Type: TRUCK" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
