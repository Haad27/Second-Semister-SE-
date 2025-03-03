#include <iostream>
#include <string>
#include <vector>

using namespace std;

void reversearray(int *arr, int size) {
    int start = 0;
    int end = size - 1;
    
    while (start < end) {  
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    int size = 5;
    int *arr = new int[size];
  cout <<"enter 5 values";
  for (int i = 0; i < size; i++)
  {
    cout << "enter value" << i + 1 << ":";
    cin >> arr[i];
  }
  cout << "original array is:";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  
  reversearray(arr, size);
  cout << "reversed array is:";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  

  
    return 0;
}
