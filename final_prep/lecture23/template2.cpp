#include <iostream>
#include <string>
#include <vector>

using namespace std;

 template <typename T,typename T2>
T myMax(T a, T2 b){
    return a+b;
}
int main() {
  
cout << myMax(3,4);
cout << myMax(3.3,4.3);
cout << myMax(3,4.3);
  
    return 0;
}
