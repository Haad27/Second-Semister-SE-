
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class MyClass
{
public:
    static void sayHello()
    {
        cout << "Hello from a static function!" << std::endl;
    }
};

int main()
{
    MyClass::sayHello(); // Called without an object
    return 0;
}
