#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Box {
    private:
        int length;
    
    public:
        
        Box(int l) {
            length = l;
        }
    

        Box(const Box &oldBox) {
            length = oldBox.length;
        }
    
        void display() {
            cout << "Length: " << length << endl;
        }
    };
    
    int main() {

        Box box1(10);
        
        Box box2 = box1;  
        Box box3(box1);
        Box box4=box1;
        
        
        cout << "Box1 ";
        box1.display();
        
        cout << "Box2 ";
        box2.display();
        box3.display();
        box4.display();
        
        return 0;
    }
    
