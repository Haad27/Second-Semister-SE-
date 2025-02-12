#include <iostream>
#include <string>
#include <vector>

using namespace std;
// defining preprocessing variables

#define pi 3.14
#define CIRCLEAREA(r) (pi * r * r)
#define AREAPARAMETER(r) (2 * pi * r)
#define RECTANGLE(l, w) (l * w)
#define RECTANGLEPARAMETER(l, w) (2 * (l + w))
#define TRIANGLEAREA(b, h) (0.5 * b * h)
#define TRIANGLEPARAMETER(a, b, c) (a + b + c)

void circle()
{
    double r;

    // asking fro radious to calculate its area and paramter
    cout << "enter the radius of the circle\n";
    cin >> r;
    cout << "the area of the circle is " << CIRCLEAREA(r) << endl;
    cout << "the parameter of the circle is " << AREAPARAMETER(r) << endl;

    // explaing whow the calulation is happening
    cout << "\n[DEBUG] Compilation details\n";
    cout << "shape type 1 \n";
    cout << "the formula for circle area == pi * r * r \n";
    cout << "the formula for circle area == " << pi << " * " << r << " * " << r << "\n\n";
    cout << "the formula for circle parameter == 2 * pi * r \n";
    cout << "the formula for circle parameter == 2  * " << pi << " * " << r << "\n\n";
}
void rectangle()
{
    double length, width;
    cout << "enter the length of the rectangle\n";
    cin >> length;
    cout << "enter the width of the rectangle\n";
    cin >> width;
    // asking for width and length to calculate its area and paramter

    cout << "the area of the rectangle is " << RECTANGLE(length, width) << endl;
    cout << "the parameter of the rectangle is " << RECTANGLEPARAMETER(length, width) << endl;

    // explaing whow the calulation is happening

    cout << "\n[DEBUG] Compilation details\n";
    cout << "shape type 2 \n";

    cout << "the formula for rectangle area == length * width \n";
    cout << "the formula for rectangle parameter == 2 " << length << "*" << width << "\n\n";

    cout << "the formula for rectangle parameter == 2 * (length + width) \n";
    cout << "the formula for rectangle parameter == 2 * (" << length << "+" << width << ") \n\n";
}
void triangle()
{
    // asking fro three sides of triangle to calculate its area and paramter

    double a, b, c;
    cout << "enter the base of the triangle\n";
    cin >> a;
    cout << "enter the height of the triangle\n";
    cin >> b;
    cout << "enter the third side of the triangle\n";
    cin >> c;
    cout << "the area of the triangle is " << TRIANGLEAREA(a, b) << endl;
    cout << "the parameter of the triangle is " << TRIANGLEPARAMETER(a, b, c) << endl;

    // explaing whow the calulation is happening

    cout << "\n[DEBUG] Compilation details\n";
    cout << "shape type 3 \n";
    cout << "the formula for triangle area == 0.5 * base * height \n\n";

    cout << "the formula for triangle area == 0.5 " << a << "*" << b << "\n\n";
    cout << "the formula for triangle parameter == a + b + c \n";
    cout << "the formula for triangle parameter == " << a << "+" << b << "+" << c << "\n";
}
int main()
{
    bool flag = true;
    // using do while to keep asking until he says to quit
    do
    {
        int choice;
        cout << "select the shape you want to find\n1:circle\n2:rectangle\n3:triangle \n(0 to quit) \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            circle();
            break;

        case 2:
            rectangle();
            break;

        case 3:
            triangle();
            break;
        case 0:
            flag = false;
            break;
        default:
            cout << "not in the range of 1 to 3\n";
            break;
        }
    } while (flag ==true );
    {
        cout << "thanks for using\n";
    }

    return 0;
}
