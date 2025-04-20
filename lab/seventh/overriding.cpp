#include <iostream>
#include <string>
#include <vector>

using namespace std;
class complex {
    int a , b ;
    public:
     complex(){
        a=0;
        b=0;
     }
     complex(int x , int y){
        a=x;
        b=y;
     }
     complex(int x){
        a=x;
        b=0;
     }

     void print(){
        cout<<a<<" + "<<b<<"i"<<endl;
     }
};

int main() {
   complex c1(3,5);
   c1.print();

  
    return 0;
}
