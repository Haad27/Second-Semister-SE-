#include <iostream>
using namespace std;
// declearing the class
class Calculator
{
public:

    int add(int a, int b)
    {
        return a + b;
    }
};
// declearing the class
class Addcalculator
{
    int a, b;

    friend class Calculator;

public:
    // using getter and setter to get vale and returnhem as well
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
// main function
int main()
{
    // taking input from the user
    int first, second;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    // creating object of the class
    Addcalculator add;
    add.setNumbers(first, second);
    Calculator calc;
    cout << "Result : " << calc.add(add.getFirst(), add.getSecond()) << endl;

    return 0;
}
