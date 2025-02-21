#include <iostream>
#include <string>
#include <vector>

using namespace std;

class person{
    public:
    int age;
    int year;
    int date;

    person (int x , int y ,int z){
        age = x;    // Fixed: assign parameter to class member
        year = y;   // Fixed: assign parameter to class member
        date = z;
    
     }
};
int main() {
    int x ,y ,z;
    cout << "Enter your age: ";
    cin >> x >>y>>z;

  person persons(x,y,z);

  cout << persons.age <<"   "<< persons.year<<"  " << persons.date << endl;
  
  

    
    return 0;
}
