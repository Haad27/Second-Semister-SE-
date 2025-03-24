#include <iostream> 
#include <vector> 
 
using namespace std; 

class person { 
protected: 
    int age; 
    string name; 

public: 
    person(string x, int y) { 
        name = x; 
        age = y; 
    } 

    void display() { 
        cout << "name and age == " << name << " " << age << endl; 
    } 
}; 
 
class student : public person { 
    int grade; 

public: 
    student(string name, int age, int grade) : person(name, age) {  
        this->grade = grade;  
    }  

    void show();  
};  

void student::show() { 
    cout << "the marks == " << grade << endl; 
    display(); 
} 

int main() { 
    student s("haad", 23, 34);  
    s.show();  
    return 0; 
}  
