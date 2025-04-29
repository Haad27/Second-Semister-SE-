#include <iostream>
#include <string>
#include <vector>

using namespace std;
//main  base class
class shape
{
protected:
    double areas, volumes;

public:
    virtual void area()
    {
        cout << "Area : " << areas << endl;
    };
    virtual void volume()
    {
        cout << "Volume : " << volumes << endl;
    };
//pure virtual function
    virtual void display() = 0;
};
//class inheriting from shape
class point : public shape
{
protected:
    int x, y;

public:
//using contructor to declare
    point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void display()
    {
        cout << " Position :: x : " << x << " y : " << y << endl;
    }
};
//circle doing mutilevel inheritnece
class circle : public point
{
protected:
    int radius;

public:
// constructor putting value to this value and teh points
    circle(int x, int y, int radius) : point(x, y)
    {
        this->radius = radius;
    }
    void area()
    {
        areas = 3.14 * radius * radius;
    }
    void display()
    {
        cout << "Radious of circle == " << radius << endl;
        cout << "position of circle == x= " << x << " y= " << y << endl;
        cout << "Area of circle == " << areas << endl;
    }
};
//cyclinder another emple of multilevel inheritence
class cylinder : public circle
{
protected:
    int height;

public:
//declaring the value
    cylinder(int x, int y, int radius, int height) : circle(x, y, radius)
    {
        this->height = height;
    }
    void area()
    {
        areas = 3.14 * radius * height;
    }
    void volume()
    {
        volumes = 3.14 * radius * radius * height;
    }
    void display()
    {
        cout << "Hieght of cylinder == " << height << endl;
        cout << "Radious of cylinder == " << radius << endl;
        cout << "Area of cylinder == " << areas << endl;
        cout << "Volume of cylinder == " << volumes << endl;
        cout << "position == x= " << x << " y=" << y << endl;
    }
};
int main()
{
    shape *s1;

    cylinder cy1(34, 56, 2, 4);
    s1 = &cy1;
    s1->area();     
    s1->volume();   
    s1->display();  

    circle c1(10, 5, 32);
    s1 = &c1;
    s1->area();     
    s1->display();  

    return 0;
}

