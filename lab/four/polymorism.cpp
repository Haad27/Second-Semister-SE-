#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
    public:
      void animalSound() {
        cout << "The animal makes a sound \n";
      }
  };
  
  // Derived class
  class Pig : public Animal {
    public:
      void animalSound() {
        cout << "The pig says: wee wee \n";
      }
  };
  
  // Derived class
  class Dog : public Animal {
    public:
      void animalSound() {
        cout << "The dog says: bow wow \n";
      }
  };
int main() {
  
  Dog dog;
  dog.animalSound();


    return 0;
}
