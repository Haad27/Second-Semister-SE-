#include <iostream>
#include <string>

using namespace std;
//decalre struct
struct Student {
    string name;
    int rollNumber;
    int marks[3];
    float average;
};

int main() {
    // array of 3 
    Student students[3];

    // Input student data
    for (int i = 0; i < 3; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> students[i].name;
        
        cout << "Enter roll number of student " << i + 1 << ": ";
        cin >> students[i].rollNumber;
        
        int totalMarks = 0;
        for (int j = 0; j < 3; j++) {
            cout << "Enter marks for subject " << j + 1 << ": ";
            cin >> students[i].marks[j];
            totalMarks += students[i].marks[j];
        }
        
        students[i].average = totalMarks / 3.0;
    }

    // Sorting students based on average in descending order
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (students[i].average < students[j].average) {
                swap(students[i], students[j]);
            }
        }
    }

    // Displaying students in descending order of averages
    cout << "\nStudents sorted by average marks (Descending Order):\n";
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << students[i].name << ", Roll No: " << students[i].rollNumber
             << ", Average Marks: " << students[i].average << endl;
    }

    return 0;
}
 