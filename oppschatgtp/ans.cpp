#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int id;
    int contact;

public:
    void inputPersonDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter contact number: ";
        cin >> contact;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Contact: " << contact << endl;
    }
};

class Student : public Person {
private:
    string major;
    int yearLevel;
    float gpa;
    int currentCourses;
    string enrolledCourses[5];  // Maximum 5 courses

public:
    void inputStudentDetails() {
        inputPersonDetails();
        cout << "Enter major: ";
        cin >> major;
        cout << "Enter year level (1-4): ";
        cin >> yearLevel;
        cout << "Enter GPA: ";
        cin >> gpa;
        cout << "Enter number of current courses (max 5): ";
        cin >> currentCourses;
        
        cout << "Enter course codes for enrolled courses:" << endl;
        for(int i = 0; i < currentCourses; i++) {
            cout << "Course " << i+1 << ": ";
            cin >> enrolledCourses[i];
        }
    }

    void displayStudentDetails() {
        cout << "\n----- Student Details -----\n";
        displayPersonDetails();
        cout << "Major: " << major << endl;
        cout << "Year Level: " << yearLevel << endl;
        cout << "GPA: " << gpa << endl;
        cout << "Enrolled Courses:" << endl;
        for(int i = 0; i < currentCourses; i++) {
            cout << i+1 << ". " << enrolledCourses[i] << endl;
        }
        cout << "-------------------------\n";
    }
};

class Professor : public Person {
private:
    string department;
    string coursesTaught[3];  // Maximum 3 courses
    int numCourses;

public:
    void inputProfessorDetails() {
        inputPersonDetails();
        cout << "Enter department: ";
        cin >> department;
        cout << "Enter number of courses teaching (max 3): ";
        cin >> numCourses;
        
        cout << "Enter course codes being taught:" << endl;
        for(int i = 0; i < numCourses; i++) {
            cout << "Course " << i+1 << ": ";
            cin >> coursesTaught[i];
        }
    }

    void displayProfessorDetails() {
        cout << "\n----- Professor Details -----\n";
        displayPersonDetails();
        cout << "Department: " << department << endl;
        cout << "Courses Teaching:" << endl;
        for(int i = 0; i < numCourses; i++) {
            cout << i+1 << ". " << coursesTaught[i] << endl;
        }
        cout << "---------------------------\n";
    }
};

int main() {
    int choice;
    Student student;
    Professor professor;

    do {
        cout << "\nUniversity Management System\n";
        cout << "1. Add New Student\n";
        cout << "2. Add New Professor\n";
        cout << "3. Display Student Details\n";
        cout << "4. Display Professor Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                student.inputStudentDetails();
                break;
                
            case 2:
                professor.inputProfessorDetails();
                break;

            case 3:
                student.displayStudentDetails();
                break;

            case 4:
                professor.displayProfessorDetails();
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while(choice != 5);

    return 0;
}
