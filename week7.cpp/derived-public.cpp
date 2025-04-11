#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;
protected:
    int prot = 2;
private:
    int priv = 3;
};

class Derived : public Base {
public:
    void show() {
        cout << "Inside Derived:\n";
        cout << "pub = " << pub << endl;      // ✅ OK
        cout << "prot = " << prot << endl;    // ✅ OK
        // cout << "priv = " << priv << endl; // ❌ Error
    }
};

class MoreDerived : public Derived {
public:
    void show() {
        cout << "Inside MoreDerived:\n";
        cout << "pub = " << pub << endl;      // ✅ OK
        cout << "prot = " << prot << endl;    // ✅ OK
        // cout << "priv = " << priv << endl; // ❌ Still Error
    }
};

int main() {
    MoreDerived obj;
    obj.show();

    return 0;
}
