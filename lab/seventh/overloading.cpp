#include <iostream>
#include <string>
#include <vector>

using namespace std;

int volume(double c ,int h ){
    return(3.14 * c * c * h);
}
int volume(int a){
    return(a * a * a);
}
int volume(int l, int b, int h){
    return(l * b * h);
}

int main() {
 cout << "the volume of cuboid of 3 7 6 == " << volume(3,7,6) << endl;
 cout << "the volume of cylinder of 3 6 == " << volume(3, 6) << endl;
 cout << "the volume of cube of 3 == " << volume(3) << endl;  

  
    return 0;
}
