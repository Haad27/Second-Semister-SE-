#include <iostream>

// Define an enum for traffic light colors
enum TrafficLight {
    RED,    // 0
    YELLOW, // 1
    GREEN   // 2
};

int main() {
    TrafficLight light = RED;
    
    if (light == RED) {
        std::cout << "Stop!" << std::endl;
    }
    else if (light == GREEN) {
        std::cout << "Go!" << std::endl;
    }
    else {
        std::cout << "Slow down!" << std::endl;
    }
    
    return 0;
}
