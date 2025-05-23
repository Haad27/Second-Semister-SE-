#include <iostream>
using namespace std;

enum Gender { Male, Female };

struct Student {
    Gender gender;
    union {
        int rollNo;
        float GPA;
    };
};

int main() {
    Student s;
    s.gender = Male;
    s.rollNo = 101;

    cout << "Gender: " << (s.gender == Male ? "Male" : "Female") << endl;
    cout << "Roll No: " << s.rollNo << endl;
}
