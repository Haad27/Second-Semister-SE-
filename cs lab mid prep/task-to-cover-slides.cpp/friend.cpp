#include <iostream>   
using namespace std;   

// Forward declaration of class B   
class B;   

class A {   
private:   
    int numA;   

public:   
    A(int value ) : numA(value) {  // Constructor initializes numA  
        cout << "Constructor of A called!" << endl;
    }    

    // Declare class `B` as a friend class   
    friend class B;   

    // Declare `display()` as a friend function   
    friend void display(A obj);   
};   

class B {   
public:   
    B() {  
        cout << "Constructor of B called!" << endl;
    }

    void showA(A obj) {   
        // Accessing private member of class `A` 
        cout << "Friend Class Access: numA = " << obj.numA << endl;   
    }   
};   

// Friend function definition   
void display(A obj) {   
    cout << "Friend Function Access: numA = " << obj.numA << endl;   
}   

int main() {   
    cout << "Creating object A...\n";  
    A objA(20);  // Creating object of A with a value  

    cout << "Creating object B...\n";  
    B objB;  // Creating object of B  

    objB.showA(objA);  // Access through friend class   
    display(objA);  // Access through friend function   

    return 0;   
}
