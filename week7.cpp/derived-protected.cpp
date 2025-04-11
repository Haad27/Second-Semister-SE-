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

class Derived : protected Base {
public:
    void show() {
        cout << "Inside Derived:\n";
        cout << "pub = " << pub << endl;     // ✅ OK (pub becomes protected)
        cout << "prot = " << prot << endl;   // ✅ OK
        // cout << "priv = " << priv << endl; // ❌ Not accessible
    }
};

class MoreDerived : public Derived {
public:
    void show() {
        cout << "Inside MoreDerived:\n";
        cout << "pub = " << pub << endl;     // ✅ OK (still protected)
        cout << "prot = " << prot << endl;   // ✅ OK
        // cout << "priv = " << priv << endl; // ❌ Not accessible
    }
};

int main() {
    MoreDerived obj;
    obj.show();

    // Accessing from outside:
    // cout << obj.pub << endl;  // ❌ Error: pub is protected in Derived
    return 0;
}
