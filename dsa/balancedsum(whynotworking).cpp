#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool hasBalancedSum(vector<int> &nums)
    {
        if (nums.size() < 3)
        {
            return false;
        }

        for (int pivot = 0; pivot < nums.size(); pivot++)
        {
            int sum1 = 0, sum2 = 0;

            for (int j = 0; j < pivot; j++)
            {
                sum1 += nums[j];
            }
            for (int k = nums.size() - 1; k > pivot; k--)
            {
                sum2 += nums[k];
            }

            cout << "Pivot: " << pivot << ", Left sum: " << sum1
                 << ", Right sum: " << sum2 << endl;
            if (sum1 == sum2)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution solution;

    // Test cases
    vector<int> test1 = {1, 2, 3, 4, 6};   // Should return true
    vector<int> test2 = {1, 5, 3, 9};      // Should return false
    vector<int> test3 = {20, 10, -10, 20}; // Should return true

    cout << "Test 1: " << (solution.hasBalancedSum(test1) ? "true" : "false") << endl;
    cout << "Test 2: " << (solution.hasBalancedSum(test2) ? "true" : "false") << endl;
    cout << "Test 3: " << (solution.hasBalancedSum(test3) ? "true" : "false") << endl;

    return 0;
}