#include <iostream>
#include <string>

using namespace std;

// Abstract base class Employee
class Employee {
private:
    string firstName;
    string lastName;
    int employeeID;
public:
    Employee(const string& first, const string& last, int id)
        : firstName(first), lastName(last), employeeID(id) {}
    virtual ~Employee() {}

    // pure virtual functions
    virtual float earnings() const = 0;
    virtual void print()    const = 0;

    // helper to get full name and ID
    string getName() const {
        return firstName + " " + lastName + " (ID: " + to_string(employeeID) + ")";
    }
};

// SalariedEmployee
class SalariedEmployee : public Employee {
private:
    float weeklySalary;
public:
    SalariedEmployee(const string& first, const string& last, int id, float salary)
        : Employee(first, last, id), weeklySalary(salary) {}
    float earnings() const override {
        return weeklySalary;
    }
    void print() const override {
        cout << "Salaried Employee: " << getName()
             << "\nWeekly Salary: $" << weeklySalary << "\n";
    }
};

// HourlyWorker
class HourlyWorker : public Employee {
private:
    float wage;
    float hours;
public:
    HourlyWorker(const string& first, const string& last, int id, float hourlyWage, float hrs)
        : Employee(first, last, id), wage(hourlyWage), hours(hrs) {}
    float earnings() const override {
        if (hours <= 40)
            return wage * hours;
        else
            return wage * 40 + wage * 1.5f * (hours - 40);
    }
    void print() const override {
        cout << "Hourly Worker: " << getName()
             << "\nHourly Wage: $" << wage
             << "; Hours Worked: " << hours << "\n";
    }
};

// CommissionWorker
class CommissionWorker : public Employee {
private:
    float grossSales;
    float commissionRate;
public:
    CommissionWorker(const string& first, const string& last, int id, float sales, float rate)
        : Employee(first, last, id), grossSales(sales), commissionRate(rate) {}
    float earnings() const override {
        return grossSales * commissionRate;
    }
    void print() const override {
        cout << "Commission Worker: " << getName()
             << "\nGross Sales: $" << grossSales
             << "; Commission Rate: " << commissionRate << "\n";
    }
};

// BasePlusCommissionEmployee
class BasePlusCommissionEmployee : public CommissionWorker {
private:
    float baseSalary;
public:
    BasePlusCommissionEmployee(const string& first, const string& last, int id,
                               float sales, float rate, float base)
        : CommissionWorker(first, last, id, sales, rate), baseSalary(base) {}
    float earnings() const override {
        return baseSalary + CommissionWorker::earnings();
    }
    void print() const override {
        cout << "Base-Plus Commission Employee: " << getName() << "\n";
        CommissionWorker::print();
        cout << "Base Salary: $" << baseSalary << "\n";
    }
};

int main() {
    // Create a fixed array of 4 employees
    Employee* staff[4];
    staff[0] = new SalariedEmployee("John", "Smith", 1001, 800.0f);
    staff[1] = new HourlyWorker("Karen", "Price", 1002, 16.75f, 42);
    staff[2] = new CommissionWorker("Sue", "Jones", 1003, 10000.0f, 0.06f);
    staff[3] = new BasePlusCommissionEmployee("Bob", "Lewis", 1004, 5000.0f, 0.04f, 300.0);

    // Display each employee's information and earnings
    for (int i = 0; i < 4; ++i) {
        staff[i]->print();
        cout << "Earned: $" << staff[i]->earnings() << "\n\n";
    }

    return 0;
}
