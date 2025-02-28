#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Box {
    private:
        int length;
    
    public:
        // Normal constructor
        Box(int l) {
            length = l;
        }
    
        // Copy constructor
        Box(const Box &oldBox) {
            length = oldBox.length;
        }
    
        // Function to display length
        void display() {
            cout << "Length: " << length << endl;
        }
    };
    
    int main() {
        // Create first box
        Box box1(10);
        
        // Create second box using copy constructor
        Box box2 = box1;  // or Box box2(box1);
        Box box3 = box1;  // or Box box2(box1);
        
        // Display both boxes
        cout << "Box1 ";
        box1.display();
        
        cout << "Box2 ";
        box2.display();
        box3.display();
        
        return 0;
    }
    
