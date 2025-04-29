#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;
class Employee {
    public:
       Employee(const char *, const char *);
       ~Employee();
        char *getFirstName() const;
        char *getLastName() const;
    
       // Pure virtual functions make Employee abstract base class.
       virtual float earnings() const = 0; // pure virtual
       virtual void print() const = 0;     // pure virtual
    
    protected:
       char *firstName;
       char *lastName;
    };
    Employee::Employee(const char *first, const char *last)
{
	firstName = new char[ strlen(first) + 1 ];
	strcpy(firstName, first);
	lastName = new char[ strlen(last) + 1 ];
	strcpy(lastName, last);
}

// Destructor deallocates dynamically allocated memory
Employee::~Employee() {
   delete [] firstName;   delete [] lastName;
}

// Return a pointer to the first name
char *Employee::getFirstName() const {
return firstName;   // caller must delete memory
}

char *Employee::getLastName() const {
   return lastName;   // caller must delete memory
}
class SalariedEmployee: public Employee {
    public:
        SalariedEmployee(const char *, const char *, float = 0.0);
           void setWeeklySalary(float);
           virtual float earnings() const;
           virtual void print() const;
    private:
           float weeklySalary; 
    };
    // Constructor function for class
SalariedEmployee:: SalariedEmployee(const char *first, 
    const char *last, float s)
: Employee(first, last)  // call base-class constructor
{ weeklySalary = s > 0 ? s : 0; }

// Set the SalariedEmployee’s salary
void SalariedEmployee::setWeeklySalary(float s)
{ weeklySalary = s > 0 ? s : 0; }

// Get the SalariedEmployee’s pay
float SalariedEmployee::earnings() const { return weeklySalary; }

// Print the SalariedEmployee’s name 
void SalariedEmployee::print() const
{
cout << endl << " Salaried Employee: " << getFirstName()
<< ' ' << getLastName();
}
class CommissionWorker : public Employee {
    public:
         CommissionWorker(const char *, const char *, float = 0.0, unsigned = 0);
        void setCommission(float);
        void setQuantity(unsigned);
        virtual float earnings() const;
        virtual void print() const;
    
    private:
        float commission;   // amount per item sold
        unsigned quantity;  // total items sold for week
    };
    
    CommissionWorker::CommissionWorker(const char *first,
        const char *last, float c, unsigned q)
   : Employee(first, last)  // call base-class constructor
{
	commission = c > 0 ? c : 0;
	quantity = q > 0 ? q : 0;
}
void CommissionWorker::setCommission(float c)
   { commission = c > 0 ? c : 0; }
void CommissionWorker::setQuantity(unsigned q)
   { quantity = q > 0 ? q : 0; }
float CommissionWorker::earnings() const
   { return commission * quantity; }
void CommissionWorker::print() const
{
   cout << endl << "Commission worker: " << getFirstName()
        << ' ' << getLastName();
}

class HourlyWorker : public Employee {
    public:
       HourlyWorker(const char *, const char *, 
                    float = 0.0, float = 0.0);
       void setWage(float);
       void setHours(float);
       virtual float earnings() const;
       virtual void print() const;
    private:
       float wage;   // wage per hour
       float hours;  // hours worked for week
    };
    HourlyWorker::HourlyWorker(const char *first, const char *last,
        float w, float h)
: Employee(first, last)   // call base-class constructor  
{
wage = w > 0 ? w : 0;
hours = h >= 0 && h < 168 ? h : 0;
}
void HourlyWorker::setWage(float w) { wage = w > 0 ? w : 0; }
// Set the hours worked
void HourlyWorker::setHours(float h)
{ hours = h >= 0 && h < 168 ? h : 0; }
// Get the HourlyWorker's pay
float HourlyWorker::earnings() const { return wage * hours; }
// Print the HourlyWorker's name 
void HourlyWorker::print() const
{
cout << endl << "    Hourly worker: " << getFirstName()
<< ' ' << getLastName();
}
class BasePlusCommissionEmployee:public CommissionWorker
{
private:
	float baseSalary;
public:
	BasePlusCommissionEmployee(const char* , const char* , float =0.0, unsigned =0,float =0.0);
	void setBaseSalary(float sal)	{
		baseSalary = sal;
	}
	float getBaseSalary(void) const 	{
		return baseSalary;
	}
	void print() const;
	float earnings() const;
};

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const char* first, const char* last, float c,
    unsigned q,float sal)
    :CommissionWorker(first,last,c,q)
{
 baseSalary=(sal);
}
void BasePlusCommissionEmployee::print() const
{
cout << "\nbase-salaried commission employee: ";
CommissionWorker::print();  // code reuse
} // end function print
float BasePlusCommissionEmployee::earnings() const
{ 
return getBaseSalary() + CommissionWorker::earnings(); 

}; // end function earnings

int main()
{
   Employee *ptr;  // base-class pointer

   SalariedEmployee b("Nauman", "Sarwar", 800.00);
   ptr = &b;  // base-class pointer to derived-class object
   ptr->print();                           // dynamic binding
   cout << " earned $" << ptr->earnings(); // dynamic binding
   b.print();                              // static binding
   cout << " earned $" << b.earnings();    // static binding

   CommissionWorker c("Qasim", "Ali", 3.0, 150);
   ptr = &c;  // base-class pointer to derived-class object
   ptr->print();                           // dynamic binding
   cout << " earned $" << ptr->earnings(); // dynamic binding
   c.print();                              // static binding
   cout << " earned $" << c.earnings();    // static binding

      BasePlusCommissionEmployee p("Mehshan", "Mustafa", 2.5, 200, 1000.0);
   ptr = &p;  // base-class pointer to derived-class object
   ptr->print();                           // dynamic binding
   cout << " earned $" << ptr->earnings(); // dynamic binding
   p.print();                              // static binding
   cout << " earned $" << p.earnings();    // static binding

   HourlyWorker h("Samer", "Tufail", 13.75, 40);
   ptr = &h;  // base-class pointer to derived-class object
   ptr->print();                           // dynamic binding
   cout << " earned $" << ptr->earnings(); // dynamic binding
   h.print();                              // static binding
   cout << " earned $" << h.earnings();    // static binding

   cout << endl;

   return 0;
}

