#include <iostream>
using namespace std;

//declaring struct
struct complex
{
    int imaginary, real;

} s1, s2;

int main()
{
    //taking input the complex numbers
    cout << "enter real ad imagenary part of 1sr complex number :";
    cin >> s1.real >> s1.imaginary;

    cout << "enter real ad imagenary part of 1sr complex number :";
    cin >> s2.real >> s2.imaginary;
   
    //displaying the results off add,sub and multi
    cout << "addition ==  (" << s1.real + s2.real << ")+(" << s1.imaginary + s2.imaginary << ") i" <<endl; //addition formula

    cout << "substraction ==  (" << s1.real - s2.real << ")+(" << s1.imaginary - s2.imaginary << ") i" <<endl; //substraction formula

    cout << "multiplication ==  (" << (s1.real * s2.real)-(s1.imaginary*s2.imaginary) << ")+(" <<( s1.imaginary * s2.real)+(s2.imaginary*s1.real) << ") i" <<endl; //multiplication formula 
}