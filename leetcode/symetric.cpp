#include <iostream>
#include <string>
#include <vector>

using namespace std;
int final[1000];
class Solution
{
public:
    int countSymmetricIntegers(int low, int high)
    {
        int y;
        int arr[1000];
        for (int i = low, y = 0; i < high; y++, i++)

        {
            arr[y] = i;
        }
        int temp = high;
        int count = 0;
        while (temp > 0)
        {
            int digit = temp % 10;

            temp = temp / 10;
            count++;
        }

        if (count % 2 == 0)
        {
            int sum1, sum2;
            for (int i = 0; i < count / 2; i++)
            {
                sum1 = sum1 + arr[i];
            }
            for (int i = count / 2; i < count; i++)
            {
                sum2 = sum2 + arr[i];
            }

            if (sum1==sum2)
            {
                cout << "symetric";
            }
            
        }
        else if (count % 2 == 1)
        {
            cout << "not exsist\n";
        }
    }
};
int main()
{

    return 0;
}
