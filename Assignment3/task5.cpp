#include <iostream>
#include <string>
using namespace std;
//base class with data
class Person {  
protected:
    string name;
    int age;
    string gender;

public:
//constructor to full the  data
    Person(string name, int age, string gender)
        : name(name), age(age), gender(gender) {}
//displaying the data
    virtual void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};
//using virtual because a diamound structire is beign formed and otherwise it will cause ambigity
class Faculty : virtual public Person {  
protected:
    string subject;
    string designation;

public:
//giving data to not only this function but of base class as well
    Faculty(string name, int age, string gender, string subject, string designation)
        : Person(name, age, gender), subject(subject), designation(designation) {}

    void displayInfo()  {
        Person::displayInfo();
        cout << "Subject: " << subject << endl;
        cout << "Designation: " << designation << endl;
    }
};
//using virtual because a diamound structire is beign formed and otherwise it will cause ambigity

class Student : virtual public Person {  
protected:
    int studentId;
    int semester;
    string department;
//giving data to not only this function but of base class as well

public:
    Student(string name, int age, string gender, int studentId, int semester, string department)
        : Person(name, age, gender), studentId(studentId), semester(semester), department(department) {}

    void displayInfo()  {
        Person::displayInfo();
        cout << "Student ID: " << studentId << endl;
        cout << "Semester: " << semester << endl;
        cout << "Department: " << department << endl;
    }
};
//calling both of virtual classes and nnow will be no ambigiity
class TeachingAssistant : public Faculty, public Student {  
public:
//assigning value to all the classes above to fill all the data
    TeachingAssistant(string name, int age, string gender,
                      string subject, string designation,
                      int studentId, int semester, string department)
        : Person(name, age, gender),
          Faculty(name, age, gender, subject, designation),
          Student(name, age, gender, studentId, semester, department) {}

    void displayInfo()  {
        Person::displayInfo();
        cout << "Subject: " << subject << endl;
        cout << "Designation: " << designation << endl;
        cout << "Student ID: " << studentId << endl;
        cout << "Semester: " << semester << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    //decalring and calling them all
    Faculty f("Dr. Sara", 40, "Female", "Physics", "Professor");
    Student s("Ali", 20, "Male", 101, 5, "Computer Science");
    TeachingAssistant ta("Ahmed", 22, "Male", "Math", "TA", 202, 6, "Mathematics");

    cout << "FACULTY INFO:" << endl;
    f.displayInfo();
    cout << "\nSTUDENT INFO:" << endl;
    s.displayInfo();
    cout << "\nTEACHING ASSISTANT INFO:" << endl;
    ta.displayInfo();

    return 0;
}
