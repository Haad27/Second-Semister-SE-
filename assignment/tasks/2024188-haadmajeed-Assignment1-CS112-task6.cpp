#include <iostream>

using namespace std;

union Bitwise_data {
    unsigned int integar;
    unsigned char character[4];
};

int main() {
    Bitwise_data bitwise;
    int value;

    cout << "Enter the value: ";
    cin >> value;
    bitwise.integar = value;

    cout << "Individual bytes of the integer:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Byte " << i << ": " << int(bitwise.character[i]) << endl;
    }

    return 0;
}