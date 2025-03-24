#include <iostream>  
#include <string>  

using namespace std;  

class person {   
    static int x;  // Static member variable  
    const int y;
public:   
    void des() {  
        cout << "Value of x: " << x << endl;   
    }   
     person(int z, int v) : y(v) {
        x = z;
     }
      void show() {  // Static function  
        cout << "Static function called! X = " << x << endl;  
        cout << "Const function called! X = " << y << endl;  
    }  
};   

// Define static member outside the class  
int person::x = 10;  

int main() {   
    person s1(10, 20);   

    s1.show(); // Call static function without an object  

    return 0;   
}
