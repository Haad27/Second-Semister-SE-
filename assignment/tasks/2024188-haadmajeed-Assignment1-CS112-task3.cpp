#include <iostream>
#include <string>
#include <vector>

using namespace std;
// declare the struct and union
struct Data
{
    int integar;
    float floatt;
    char character;
};
union DataUnion
{
    int integar;
    float floatt;
    char character;
};

int main() {
    // Structure example
    Data struct_data;
    struct_data.integar = 10;
    struct_data.floatt = 20.5;
    struct_data.character = 'A';

    cout << "Structure:" << endl;
    cout << "integar: " << struct_data.integar << endl;
    cout << "floatt: " << struct_data.floatt << endl;
    cout << "character: " << struct_data.character << endl;
    cout << "Size of structure: " << sizeof(struct_data) << " bytes" << endl;

    // Union example
    DataUnion union_data;
    union_data.integar = 10;
    cout << "Union (after storing integar): " << union_data.integar << endl;

    union_data.floatt = 20.5;
    cout << "Union (after storing floatt): " << union_data.floatt << endl;

    union_data.character = 'A';
    cout << "Union (after storing character): " << union_data.character << endl;

    cout << "Size of union: " << sizeof(union_data) << " bytes" << endl;

    return 0;

  
    return 0;
}

