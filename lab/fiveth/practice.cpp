#include <iostream>
#include <string>
#include <vector>

using namespace std;
int count=0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time counstructor is called for the object " << count << endl;
    }
    ~num()
    {
        cout << "this is the time disctructor is called for the object " << count << endl;
        count--;
    }
};

main()
{
    cout << "we are inside our main function " << endl;
    cout << "creating first object " << endl;

    num n1;
    {
    cout <<"entering the block "<<endl <<"creating tewo objects\n";
    num n2,n3;
    cout <<"exiting the block\n";
    };

    cout <<"back to main\n";

    return 0;
}
