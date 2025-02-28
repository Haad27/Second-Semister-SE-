#include <iostream>
using namespace std;
class Box
{
private:
    double length;
    double breadth;
    double height;

public:
    Box(double le = 1.0, double br = 1.0, double he = 1.0)
    {
        length = le;
        breadth = br;
        height = he;
    }
    double volume()
    {
        return length * breadth * height;
    }
};
int main()
{
    Box Box1(4);
    Box Box2(4, 5);
    Box Box3(8, 5, 1);
    cout << "Volume of Box1: " << Box1.volume();
    cout << endl
         << "Volume of Box2: " << Box2.volume();
    cout << endl
         << "Volume of Box3: " << Box3.volume();
    return 0;
}