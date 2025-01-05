#include <iostream>
#include <string>
#include <vector>

using namespace std;

class myclass
{
public:
    int number(int num, int num2);
    // {
    //     return num + num2;
    // }
};
   int myclass :: number(int num, int num2){
    return num + num2;
   }

int main()
{

    myclass myobj;

    cout << myobj.number(200, 30);
    return 0;
}
