#include <iostream>
#include <string>
#include <vector>

using namespace std;
class complex;

class calculator{
      
    int sum(int a , int b){
        return (a+b);
    }
    int sum_real_number(complex o1 , complex o2);
    int sum_imaginary_number(complex o1 , complex o2);
};
class complex{

    int a , b;
    friend class calculator;

    void setter (int c , int d){
        a = c;
        b = d;
    }
    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator :: sum_real_number(complex o1 , complex o2){
    return (o1.a+o2.a);
};
int calculator :: sum_imaginary_number(complex o1 , complex o2){
    return (o1.b+o2.b);
};

int main() {
    
  

  
    return 0;
}
