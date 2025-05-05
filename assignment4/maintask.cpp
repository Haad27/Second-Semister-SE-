#include <iostream>
#include <string>
#include <vector>

using namespace std;

// abstract class
class employee {
public:
    string name;
    int id;

    virtual float earning()  = 0; 
    virtual void print()  = 0;    
    
    employee(string name, int id) {
        this->name = name;
        this->id = id;
    }
     
};
//derived classes
class salariedEmployee : public employee {
public:
    float weeklysalary;

    salariedEmployee(string name, int id, float weeklysalary) : employee(name, id) {
        this->weeklysalary = weeklysalary;
    }
   //overriding both of the functions
    float earning()   {  
        return weeklysalary * 4;
    }
    
    void print()   {  
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Weekly Salary: " << weeklysalary << endl;
        cout << "Earning: " << earning() << endl;
    }
};

class hourlyworked : public employee {
public:
    float hourlyrate;
    float hoursworked;
     //overriding ocurring of both of functions 
    hourlyworked(string name, int id, float hourlyrate, float hoursworked) : employee(name, id) {
        this->hourlyrate = hourlyrate;
        this->hoursworked = hoursworked;
    }

    float earning()  {
        return hourlyrate * hoursworked;
    }
    
    void print()  {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Hourly Rate: " << hourlyrate << endl;
        cout << "Hours Worked: " << hoursworked << endl;
        cout << "Earning: " << earning() << endl;
    }
};

class Comissionworkeer : public employee {
public:
    float comissionrate;
    float sales;
       //overriding ocurring of both of functions 

    Comissionworkeer(string name, int id, float comissionrate, float sales) : employee(name, id) {
        this->comissionrate = comissionrate;
        this->sales = sales;
    }
    
    float earning()  {
        return comissionrate * sales;
    }
    
    void print()  {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Comission Rate: " << comissionrate << endl;
        cout << "Sales: " << sales << endl;
        cout << "Earning: " << earning() << endl;
    }
};

class BasePlusComission : public Comissionworkeer {
public:
    float basesalary;
         //overriding ocurring of both of functions 

    BasePlusComission(string name, int id, float comissionrate, float sales, float basesalary) 
        : Comissionworkeer(name, id, comissionrate, sales) {
        this->basesalary = basesalary;
    }
    
    float earning()  {
        return basesalary + (comissionrate * sales);
    }
    
    void print()  {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Comission Rate: " << comissionrate << endl;
        cout << "Sales: " << sales << endl;
        cout << "Base Salary: " << basesalary << endl;
        cout << "Earning: " << earning() << endl;
    }
};

int main() {
    // calling all the diffrent objects
    BasePlusComission baseplusC("John", 123, 0.1, 1000, 5000);
    Comissionworkeer comissionworker("Jane", 456, 0.1, 1000);
    hourlyworked hourlyworker("Bob", 789, 10, 40);
    salariedEmployee salariedemployee("Alice", 101, 1000);


    //printing the results
    cout << "Base Plus Commission Employee:" << endl;
    baseplusC.print();
    cout << "\nCommission Employee:" << endl;
    comissionworker.print();
    cout << "\nHourly Worker:" << endl;
    hourlyworker.print();
    cout << "\nSalaried Employee:" << endl;
    salariedemployee.print();
  
    return 0;
}