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

class PublicDerived : public Base {
public:
    void show() {
        cout << "PublicDerived:\n";
        cout << "pub = " << pub << endl;      // ✅ OK (still public)
        cout << "prot = " << prot << endl;    // ✅ OK (still protected)
        // cout << "priv = " << priv << endl; // ❌ Error: private is not accessible
    }
};

class ProtectedDerived : protected Base {
public:
    void show() {
        cout << "ProtectedDerived:\n";
        cout << "pub = " << pub << endl;      // ✅ OK (now protected)
        cout << "prot = " << prot << endl;    // ✅ OK
        // cout << "priv = " << priv << endl; // ❌ Error
    }
};

class PrivateDerived : private Base {
public:
    void show() {
        cout << "PrivateDerived:\n";
        cout << "pub = " << pub << endl;      // ✅ OK (now private)
        cout << "prot = " << prot << endl;    // ✅ OK
        // cout << "priv = " << priv << endl; // ❌ Error
    }
};

int main() {
    PublicDerived obj1;
    obj1.show();
    cout << obj1.pub << endl;     // ✅ OK: pub is still public

    ProtectedDerived obj2;
    obj2.show();
    // cout << obj2.pub << endl;  // ❌ Error: pub is now protected

    PrivateDerived obj3;
    obj3.show();
    // cout << obj3.pub << endl;  // ❌ Error: pub is now private

    return 0;
}
