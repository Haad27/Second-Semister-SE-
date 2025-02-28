#include <iostream>
#include <string>
#include <vector>

using namespace std;
//declarinf the structure
struct address
{
    int zip_code;
    string city;
    string street;
};
struct Employee
{
   int id;
   string name;
   int salary;
   address add;
};


int main() {

  // taking in and siaplying the struct data
  Employee emp;
  cout<<"Enter employee id: ";
  cin>>emp.id;
  cout << "Enter employee name: ";
  cin >> emp.name;
  cout << "Enter employee salary: ";
  cin >> emp.salary;
  cout << "Enter employee zip code: ";
  cin >> emp.add.zip_code;
  cout << "Enter employee city: ";
  cin >> emp.add.city;
  cout << "Enter employee street: ";
  cin >> emp.add.street;
  cout << "Employee id: " << emp.id << endl;
  cout << "Employee name: " << emp.name << endl;
  cout << "Employee salary: " << emp.salary << endl;
  cout << "Employee zip code: " << emp.add.zip_code << endl;
  cout << "Employee city: " << emp.add.city << endl;
  cout << "Employee street: " << emp.add.street << endl;
  

  
    return 0;
}
