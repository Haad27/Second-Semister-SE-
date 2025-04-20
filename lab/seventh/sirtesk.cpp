#include <iostream>
#include <string>
#include <vector>

using namespace std;

class comlpex
{
public:
    float real;
    comlpex(float x)
    {
        real = x;
    }
    comlpex operator+(comlpex obj)
    {
        return comlpex(real + obj.real);
    }

    comlpex operator*(comlpex obj)
    {
        return comlpex(real * obj.real);
    }
    comlpex operator-(comlpex obj)
    {
        return comlpex(real - obj.real);
    }
    comlpex operator/(comlpex obj)
    {
        return comlpex(real / obj.real);
    }
    void printadd()
    {
        cout << real << " add " << endl;
    }
    void printmul()
    {
        cout << real << " multiply " << endl;
    }
    void printsub()
    {
        cout << real << " subtract " << endl;
    }
    void printdiv()
    {
        cout << real << " divide " << endl;
    }
};

int main()
{
    comlpex c1(12);
    comlpex c2(6);
    comlpex c4(60);
   
    comlpex c3 = c1 + c2 + c4 ;
    comlpex c8 = c1 - c2 - c4 ;
    comlpex c9 = c1 * c2 * c4 ;
    comlpex c10 = c1 / c2 / c4 ;

    c3.printadd();
    c8.printsub();
    c9.printmul();
    c10.printdiv();

    return 0;
}
