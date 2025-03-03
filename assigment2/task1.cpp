#include <iostream>
#include <string>
#include <vector>

using namespace std;
 void swapnumbers(int *a , int *b){
     int temp = *a;
     *a = *b;
     *b = temp;
 }

int main() {
  int x , y ;
  cout << "enter value of x \n";
  cin >> x ;
  cout << "enter value of y \n";
  cin >> y ;
  cout << "before swapping \n";
  cout << "x = " << x <<"   y = " << y << "\n";
  swapnumbers(&x,&y);
  cout << "after swapping \n";
  cout << "x = " << x <<"   y = " << y << "\n";
    return 0;
}
