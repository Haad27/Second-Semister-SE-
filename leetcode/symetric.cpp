#include <iostream>
using namespace std;

class Solution {
public:
    bool isSymmetric(int num) {
        // Convert to string
        string s = to_string(num);
        
        // If odd length, return false
        if(s.length() % 2 != 0) {
            return false;
        }
        
        // Get middle point
        int mid = s.length() / 2;
        
        // First half sum
        int sum1 = 0;
        for(int i = 0; i < mid; i++) {
            sum1 += s[i] - '0';
        }
        
        // Second half sum
        int sum2 = 0;
        for(int i = mid; i < s.length(); i++) {
            sum2 += s[i] - '0';
        }
        
        return sum1 == sum2;
    }
    
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        
        // Check each number
        for(int i = low; i <= high; i++) {
            if(isSymmetric(i)) {
                count++;
            }
        }
        
        return count;
    }
};

int main() {
    Solution s;
    
    // Test cases
    cout << "Test 1 (1 to 100): " << s.countSymmetricIntegers(1, 100) << endl;
    // Should print 9 (11,22,33,44,55,66,77,88,99)
    
    cout << "Test 2 (1200 to 1230): " << s.countSymmetricIntegers(1200, 1230) << endl;
    // Should print 4 (1203,1212,1221,1230)
    
    return 0;
}
