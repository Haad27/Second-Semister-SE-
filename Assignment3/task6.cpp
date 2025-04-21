#include <iostream>
#include <string>
using namespace std;
//base class
class point {  
public:
//calling construcotor and a distructor for every class
    point(){
        cout << "The point constructor is called \n";
    }

    ~point(){
        cout << "The point destructor is called \n";
    }
};

class circle : public point {  
public:
    circle(){
        cout << "The circle constructor is called \n";
    }

    ~circle(){
        cout << "The circle destructor is called \n";
    }
};

class cyclinder : public circle  {  
public:
    cyclinder(){
        cout << "The cyclinder constructor is called \n";
    }

    ~cyclinder(){
        cout << "The cyclinder destructor is called \n";
    }
};

int main() {
    //making object of c1 and seeing all the constructor and distrcutors being called to get a sense of how the inheritene is actually beiong called
    cyclinder c1;

    return 0;
}
