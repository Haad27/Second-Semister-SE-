#include <iostream>
#include <string>
#include <vector>

using namespace std;
class person {
    public:
    string name;
    int age;

    void call(){
        cout << "the name is " << name << endl << "age is " << age;
    }
};

int main() {
  person persons;

  persons.name = "sahil";
  persons.age = 20;
  persons.call();

  
    return 0;
}
