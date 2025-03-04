#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to count vowels in a given character
int countVowels(char *str)
{
   
    if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
        *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
    {
        return 1; // Return 1 if the character is a vowel
    }
    return 0; 
}

int main()
{
    string sentence; 
    int totalVowels = 0; 
    
    cout << "Enter any sentence: \n"; 
    getline(cin, sentence); 
    
    // Iterate through each character in the sentence
    for (char &x : sentence)
    {
        
        totalVowels += countVowels(&x);
    }
    
   
    cout << "Number of vowels: " << totalVowels;
    return 0;
}