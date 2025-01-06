#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0 ;
         int y = x;
        while (y>0){
            int digit = y % 10 ;
            rev = (rev * 10) + digit;
           y=  y/10;
        }
     if (rev == x){
        return true;
     }
     else
     return false;
    }
};
int main() {
  
   Solution solve;
  int x ;
  cout << "enter";
  cin >> x;
   if (solve.isPalindrome(x))
   {
    cout << "it is true";
   }else
   cout << "false";
  
   
  
    return 0;
}
