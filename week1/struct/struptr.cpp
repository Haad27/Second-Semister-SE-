#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct cars{
    int model;
    int * years;

};

int main() {
  cars*car =  new cars;
  car->model = 90;
  int year = 909090909;
  car-> years = &year;
  cout << car -> years; 
  // we use the arrow foor the calling of struct as we used cars 
  // if we have a pointer inside the struct then we have to use to derenefrene it as the wrror is already dereferneceing the stricuk
  
  cout << car-> model;

  delete car;
    return 0;
}
