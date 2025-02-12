#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define MIN(a, b) (((a) < (b)) ? a : b)
#define MAX(a, b) (((a) > (b)) ? a : b)

int main()
{
    int i = 100;
    int j = 50;

    cout << "the minimum value is ==" << MIN(i, j);

#ifndef TABLE_SIZE
    #define TABLE_SIZE 100
    int table[TABLE_SIZE];
#endif

#if TABLE_SIZE
    #undef TABLE_SIZE
    #define TABLE_SIZE 200
#elif TABLE_SIZE < 50
    #undef TABLE_SIZE
    #define TABLE_SIZE 50
#else
    #undef TABLE_SIZE
    #define TABLE_SIZE 100
#endif

    // cout << "the maximum value is ==" << MAX(i, j);
    table[TABLE_SIZE];  

#if 0
    cout <<"MKSTR(HELLO C++)";  // This will never be compiled bascally in //
#endif

    return 0;
}
