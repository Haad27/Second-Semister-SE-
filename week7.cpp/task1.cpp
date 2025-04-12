#include <iostream>
using namespace std;
//base class
class base {
protected:
    int ba;
public:
    void input_base() {
        cout << "Enter base: ";
        cin >> ba;
    }
    void show_base() {
        cout << "Base is " << ba << endl;
    }
    int get_base() {
        return ba;
    }
};
//another base class
class base2 {
protected:
    int y;
public:
    void input_exp() {
        cout << "Enter power: ";
        cin >> y;
    }
    void show_exp() {
        cout << "Exponent is " << y << endl;
    }
    int get_exp() {
        return y;
    }
};
//deerived class of both classes
class derived : public base, public base2 {
    int po;  // power
public:
    void ln1() {
        input_base();
        input_exp();
    }
    //function to calulate the power
    void calculate_power() {
        po = 1;
        for (int i = 0; i < get_exp(); i++) {
            po =po* get_base();
        }
    }
    //showing the result
    void show1() {
        cout << "Power: " << po << endl;
        show_base();
        show_exp();
    }
};
//showing the results
int main() {
    derived d1;
    d1.ln1();             
    d1.calculate_power();  
    d1.show1();            
    return 0;
}
