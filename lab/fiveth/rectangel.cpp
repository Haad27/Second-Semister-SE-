#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Rectangle
{
    int width, height;

public:
    Rectangle(int a, int b);
    int area() { return width * height; }
};
Rectangle::Rectangle(int a, int b)
{
    width = a;
    height = b;
};

int main()
{

    Rectangle r1(3, 5);
    cout << r1.area() << endl;
    Rectangle r2(4, 6);
    cout << r1.area() << endl;

    return 0;
}
