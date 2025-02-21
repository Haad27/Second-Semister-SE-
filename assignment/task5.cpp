#include <iostream>
#include <string>

using namespace std;

struct Address {
    int zip_code;
    string city;
    string street;
};

enum Position { 
    INTERN = 1, 
    ENGINEER, 
    MANAGER 
};

struct Employee {
   int id;
   string name;
   int salary;
   Address add;
   Position position;
};

int main() { 
    Employee emp; 
    int job; 
    
    cout << "Enter your job role:\n1: INTERN\n2: ENGINEER\n3: MANAGER\nChoice: "; 
    cin >> job;

    // Assign job role using switch
    switch (job) {
        case INTERN:
            emp.position = INTERN;
            break;
        case ENGINEER:
            emp.position = ENGINEER;
            break;
        case MANAGER:
            emp.position = MANAGER;
            break;
        default:
            cout << "Error: Incorrect input. Please enter 1, 2, or 3.\n";
            return 1; // Exit the program if input is invalid
    }

    cout << "Enter Employee ID: "; 
    cin >> emp.id;
    
    cout << "Enter Employee Name: "; 
    cin.ignore(); // Clear input buffer before getline
    getline(cin, emp.name);

    cout << "Enter Employee Salary: "; 
    cin >> emp.salary;
    
    cout << "Enter Employee Zip Code: "; 
    cin >> emp.add.zip_code;

    cout << "Enter Employee City: "; 
    cin.ignore(); // Clear input buffer again for getline
    getline(cin, emp.add.city);

    cout << "Enter Employee Street: "; 
    cin.ignore();
    getline(cin, emp.add.street);

    // Displaying Employee Details
    cout << "\nEmployee Details:\n";
    cout << "ID: " << emp.id << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Salary: " << emp.salary << endl;
    cout << "Zip Code: " << emp.add.zip_code << endl;
    cout << "City: " << emp.add.city << endl;
    cout << "Street: " << emp.add.street << endl;

    // Display Position
    cout << "Position: ";
    switch (emp.position) {
        case INTERN: cout << "INTERN\n"; break;
        case ENGINEER: cout << "ENGINEER\n"; break;
        case MANAGER: cout << "MANAGER\n"; break;
    }

    return 0;
}
