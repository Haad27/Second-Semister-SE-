#include <iostream>
using namespace std;

class Solution {
public:
    bool isSymmetric(int num) {
        // Get number of digits
        int digits = 0;
        int temp = num;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        
        // If odd number of digits, return false
        if (digits % 2 != 0) {
            return false;
        }
        
        // Get first and second half
        int firstHalf = 0;
        int secondHalf = 0;
        int halfDigits = digits / 2;
        
        // Calculate sum of second half
        for (int i = 0; i < halfDigits; i++) {
            secondHalf += num % 10;
            num /= 10;
        }
        
        // Calculate sum of first half
        for (int i = 0; i < halfDigits; i++) {
            firstHalf += num % 10;
            num /= 10;
        }
        
        return firstHalf == secondHalf;
    }
    
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for (int i = low; i <= high; i++) {
            if (isSymmetric(i)) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    
    cout << "Test 1 (1 to 100): " << s.countSymmetricIntegers(1, 100) << endl;
    cout << "Test 2 (1200 to 1230): " << s.countSymmetricIntegers(1200, 1230) << endl;
    
    return 0;
}
