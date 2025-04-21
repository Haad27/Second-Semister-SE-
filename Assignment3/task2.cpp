#include <iostream>
#include <string>
using namespace std;
//base class
class Vehicle {  
protected:
    string brand = "Mustang";

public:
    void start() {
        cout << "Brand: " << brand << endl;
    }
};
//dervied class
class Car : public Vehicle {  
protected:
    int model = 2025;

public:
    void drive() {
        cout << "Model: " << model << "  Brand: " << brand << endl;
    }
};
//dervied class derived from a dervied class
class ElectricCar : public Car {  
protected:
    int batteryPercentage = 95;

public:
    void charge() {
        cout << "Battery Percentage: " << batteryPercentage << "%" << endl;
    }
};

int main() {
    ElectricCar c1;

    c1.start();
    c1.drive();
    c1.charge();

    return 0;
}
