#include <iostream>
using namespace std;
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
};
class Addcalculator
{
    int a, b;

    friend class Calculator;

public:
    void setNumbers(int f, int s)
    {
        a = f;
        b = s;
    }
    int getFirst()
    {
        return a;
    }
    int getSecond()
    {
        return b;
    }
};

int main()
{
    int first, second;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    Addcalculator add;
    add.setNumbers(first, second);
    Calculator calc;
    cout << "Result : " << calc.add(add.getFirst(), add.getSecond()) << endl;

    return 0;
}
