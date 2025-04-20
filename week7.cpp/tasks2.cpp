#include <iostream>
using namespace std;

// base class
class Vehicle {
protected:
    int wheels;
    float weight;

public:
    Vehicle() {
        wheels = 0;
        weight = 0;
    }

    int get_wheels() {
        return wheels;
    }

    float get_weight() {
        return weight;
    }

    float load_per_wheel() {
        return weight / wheels;
    }
};
//derived class
class Car : public Vehicle {
private:
    int passenger_load;

public:
    Car(int w, float wt, int passengers) {
        wheels = w;
        weight = wt;
        passenger_load = passengers;
    }

    int get_passenger_load() {
        return passenger_load;
    }
};
//derived class of vehicle
class Truck : public Vehicle {
private:
    int passenger_load;
    float max_load;

public:
    Truck(int w, float wt, int passengers, float maxL) {
        wheels = w;
        weight = wt;
        passenger_load = passengers;
        max_load = maxL;
    }

    int get_passenger_load() {
        return passenger_load;
    }

    float calculate_efficiency() {
        return (weight / max_load) * 100;
    }
};

int main() {
    Car myCar(4, 3500, 5);
    cout << "My car carries " << myCar.get_passenger_load() << " passengers and its weight is " << myCar.get_weight() << " kg.\n";
    cout << "My car wheel loading is " << myCar.load_per_wheel() << " kg per tyre.\n\n";

    Truck myTruck(8, 12500, 2, 16000);
    cout << "The trailer's weight " << myTruck.get_weight() << " kg.\n";
    cout << "The trailer’s efficiency is " << myTruck.calculate_efficiency() ;

    return 0;
}
