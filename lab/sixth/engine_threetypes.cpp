#include <iostream>
using namespace std;

class Engine { 
public: 
    void start() { 
        cout << "Engine started\n"; 
    } 
}; 
 //association // aggregation // composition
class Car { 
    Engine *engine; // Aggregation (Car has an Engine but does not own it) 
public: 
    Car(Engine *eng) : engine(eng) {} // Passing Engine object 
    void startCar() { 
        engine->start(); 
    } 
}; 
 
int main() { 
    Engine engine; // Engine exists independently 
    Car car(&engine); // Car uses Engine 
    car.startCar(); // Start the car using the engine 
    return 0; 
} 