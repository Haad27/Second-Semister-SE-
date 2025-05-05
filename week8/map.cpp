#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> myMap;

    // insert elements using [] and insert()
    myMap[1] = "Apple";
    myMap[3] = "Banana";
    myMap[2] = "Cherry";
    myMap.insert({4, "Date"});
    myMap.insert({5, "Elderberry"});

    cout << "All elements in map (auto-sorted by key):" << endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    // common features
    cout << "\nSize of map: " << myMap.size() << endl;

    // erase an element by key
    myMap.erase(3);
    cout << "\nMap after erasing key 3:" << endl;
    for (auto it : myMap) {
        cout << it.first << ": " << it.second << endl;
    }

    // find an element
    auto it = myMap.find(2);
    if (it != myMap.end()) {
        cout << "\nElement with key 2 is: " << it->second << endl;
    }

    // unique feature: key-based direct access
    cout << "\nAccess value with key 4: " << myMap[4] << endl;

    // trying to insert duplicate key (will overwrite if using [])
    myMap[2] = "Coconut";
    cout << "\nMap after modifying key 2's value:" << endl;
    for (auto pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // clear the map
    myMap.clear();
    cout << "\nMap cleared. Size now: " << myMap.size() << endl;

    return 0;
}
