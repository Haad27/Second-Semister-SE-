#include <iostream>
#include <cmath> // For M_PI constant
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function for area calculation
    virtual double calculateArea() const = 0;
    
    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class - Circle
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    double calculateArea() const override {
        return M_PI * radius * radius;
    }
};

// Derived class - Rectangle
class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    
    double calculateArea() const override {
        return width * height;
    }
};

// Derived class - Line (has zero area)
class Line : public Shape {
    double length;
public:
    Line(double l) : length(l) {}
    
    double calculateArea() const override {
        return 0; // Lines have no area
    }
};

int main() {
    // Create shapes directly (no vector)
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Line line(10.0);
    
    // Calculate and display areas
    cout << "Circle area: " << circle.calculateArea() << endl;
    cout << "Rectangle area: " << rectangle.calculateArea() << endl;
    cout << "Line area: " << line.calculateArea() << endl;
    
    // Polymorphism example with base class pointer
    Shape* shape = &rectangle;
    cout << "Area via base pointer: " << shape->calculateArea() << endl;
    
    return 0;
}