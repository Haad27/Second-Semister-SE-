#include <iostream>
#include <string>
#include <vector>

using namespace std;
class employee{
    public:
    int id;
    float salary;
    employee(int ipid){
        id = ipid;
        salary = 50.0;
    }
    employee(){

    }

};
class programmer : private employee{
    public:
    int languagecode;
    programmer(int ipid){
        id = ipid;
        languagecode = 5;
    }
    void getdata(){
        cout<<id<<endl;
    }
};

int main() {
  
employee harry(1), rohan(2);
cout << harry.salary<< endl;
cout << rohan.salary <<endl;
programmer skillf(10);
cout<<skillf.languagecode<<endl;
skillf.getdata();

    return 0;
}
