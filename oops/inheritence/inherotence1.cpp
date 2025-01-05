#include <iostream>
#include <string>
#include <vector>

using namespace std;
class mycar
{
public:
    string name = "ford";
};

//base
class car : public mycar
{
public:
    string model = "mustang";
};

int main()
{
    car obj;

    cout << obj.name << endl
         << obj.model;

    return 0;
}
// Base class
// class Vehicle {
//   public:
//     string brand = "Ford";
//     void honk() {
//       cout << "Tuut, tuut! \n" ;
//     }
// };

// // Derived class
// class Car: public Vehicle {
//   public:
//     string model = "Mustang";
// };

// int main() {
//   Car myCar;
//   myCar.honk();
//   cout << myCar.brand + " " + myCar.model;
//   return 0;
// }