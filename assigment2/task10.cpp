#include <iostream>
using namespace std;

void reverseString(char *str)
{
    // Find the end of string
    char *end = str;
    while(*end != '\0')
    {
        end++;
    }
    end--; // Move back one position to point to last character

    // Swap characters from start and end until pointers meet
    while(str != end)
    {
        // Swap characters
        char temp = *str;
        *str = *end;
        *end = temp;
        
        // Move pointers towards middle
        str++;
        end--;
    }
}

int main()
{
    char str[100];
    
    cout << "Enter a string: ";
    cin.getline(str,100);
    
    cout << "Original string: " << str << endl;
    
    reverseString(str);
    
    cout << "Reversed string: " << str << endl;
    
    return 0;
}
