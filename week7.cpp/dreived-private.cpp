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

class Derived : private Base {
public:
    void show() {
        cout << "Inside Derived:\n";
        cout << "pub = " << pub << endl;     // ✅ OK (now private)
        cout << "prot = " << prot << endl;   // ✅ OK (now private)
        // cout << "priv = " << priv << endl; // ❌ Not accessible
    }
};

class MoreDerived : public Derived {
public:
    void show() {
        cout << "Inside MoreDerived:\n";
        // cout << "pub = " << pub << endl;   // ❌ Error: pub is private in Derived
        // cout << "prot = " << prot << endl; // ❌ Error: prot is private in Derived
    }
};

int main() {
    MoreDerived obj;
    obj.show();

    // cout << obj.pub << endl; // ❌ Error: pub is private in Derived
    return 0;
}
