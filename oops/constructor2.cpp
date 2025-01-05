#include <iostream>
#include <string>
#include <vector>

using namespace std;

class car
{
public:
    string name;
    string model;
    int year;
    car(string x, string y, int z)
    {
        name = x;
        model = y;
        year = z;
    };
};
int main()
{

    car cars("mustang ", "shelby", 2024);

    cout << "model is \t" << cars.model << "\t" << cars.name << "\t" << cars.year;

    return 0;
}
