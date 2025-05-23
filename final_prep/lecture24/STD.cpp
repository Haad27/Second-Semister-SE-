#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> vec = {7, 3, 2, 5, 6};

    for (auto n : vec)
    {
        cout << " " << n;
    }

    cout << " after sorting";
    sort(vec.begin(), vec.end());
    for (auto n : vec)
    {
        cout << " " << n;
    }

    return 0;
}
