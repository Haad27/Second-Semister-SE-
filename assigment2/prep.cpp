#include <iostream>
#include <cstring> // For strcpy()
using namespace std;

char* reverseString(char *str)
{
    if (str == nullptr) return nullptr; // Handle null input
    
    // Find the end of the string
    char *end = str;
    while (*end != '\0')
    {
        end++;
    }
    end--; // Move back to the last character

    // Swap characters
    char *start = str;
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
    return str; // Return modified string
}

int main()
{
    char str[100];
    
    cout << "Enter a string: ";
    cin.getline(str, 100);
    
    cout << "Original string: " << str << endl;
    
    // Reverse the string in-place
    reverseString(str);
    
    cout << "Reversed string: " << str << endl;
    
    return 0;
}