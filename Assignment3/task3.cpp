#include <iostream>
#include <string>
using namespace std;
//base class
class shape {  
protected:
    string Shape;

public:
    shape(string x) {
        Shape = x;
    }

    void display() {
        cout << "Shape is " << Shape << endl;
    }
};
//dervied class of base class
class rectange : public shape {  
public:
    int l;
    int b;
     //calling a constructor to put data in rectangle class as well as the base class
    rectange(int x , int y) : shape("Rectangle") {
        l = x;
        b = y;
    }

    void display() {
        //calling the main display basically overriding
        shape::display();
        cout << "Length: " << l << endl;
        cout << "Breadth: " << b << endl;
    }
};
//another derived class of base class
class circle : public shape {  
public:
    int r;
     //putting value in this class as welll as base class
    circle(int x) : shape("Circle") {
        r = x;
    }

    void display() {
        //overriding
        shape::display();
        cout << "Radius: " << r << endl;
    }
};

int main() {
    rectange r1(10, 20);
    circle c1(10);

    c1.display();
    r1.display();

    return 0;
}
