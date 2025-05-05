#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> LI;
    list<int>::iterator it;

    // inserts elements at end of list
    LI.push_back(4);
    LI.push_back(5);
    
    // inserts elements at beginning of list
    LI.push_front(3);
    LI.push_front(5);

    // returns reference to first element of list
    it = LI.begin();

    // inserts 1 before first element of list
    LI.insert(it, 1);

    cout << "All elements of List LI are: " << endl;
    for (it = LI.begin(); it != LI.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // reverse elements of list
    LI.reverse();
    cout << "All elements of List LI after reversing: " << endl;
    for (it = LI.begin(); it != LI.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // sort elements of list
    LI.sort();
    cout << "All elements of List LI after sorting: " << endl;
    for (it = LI.begin(); it != LI.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // prepare another list to merge
    list<int> LI2;
    LI2.push_back(0);
    LI2.push_back(2);
    LI2.push_back(6);

    LI2.sort(); // must be sorted before merging

    LI.merge(LI2);  // merges LI2 into LI and empties LI2

    cout << "List LI after merging with LI2: " << endl;
    for (it = LI.begin(); it != LI.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // removes all occurrences of 5 from list
    LI.remove(5);
    cout << "Elements after removing all occurrences of 5 from List:" << endl;
    for (it = LI.begin(); it != LI.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // removes last and first elements
    LI.pop_back();
    LI.pop_front();

    cout << "Elements after pop_back and pop_front:" << endl;
    for (it = LI.begin(); it != LI.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
