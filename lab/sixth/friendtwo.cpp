#include <iostream>
#include <string>
#include <vector>

using namespace std;

class complex{
    int a , b;
    friend complex sum(complex c, complex d);
    public:
     void setter(int c, int d){
        a = c;
        b = d;
     }
     void print(){
        cout << "the number are == " << a << " and " << b << "i" << endl;
     }
};

// Friend function definition outside the class
complex sum(complex c, complex d){
    complex o5;
    o5.setter(c.a + d.a, c.b + d.b);
    return o5;
}

int main() {
    complex comple, comple2, sumcomplexx;
    
    comple.setter(3, 4);
    comple.print();

    comple2.setter(5, 3);
    comple2.print();

    sumcomplexx = sum(comple, comple2);
    sumcomplexx.print();
    return 0;
}
