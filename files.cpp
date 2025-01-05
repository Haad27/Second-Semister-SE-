#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create two arrays - one for names, one for numbers
    string names[18];
    int numbers[18];
    int totalItems = 0;  // To keep track of how many items we read
    
    // Step 1: Read from file
    ifstream readFile("input.txt");
    if (!readFile) {
        cout << "Cannot open input file!" << endl;
        return 0;
    }
    
    // Read names and numbers until end of file
    while (readFile >> names[totalItems] >> numbers[totalItems]) {
        totalItems++;
    }
    readFile.close();
    
    // Step 2: Sort using simple bubble sort
    for (int i = 0; i < totalItems; i++) {
        for (int j = 0; j < totalItems - 1; j++) {
            // If number is bigger than next number, swap them
            if (numbers[j] > numbers[j + 1]) {
                // Swap numbers
                int tempNumber = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tempNumber;
                
                // Swap names too
                string tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;
            }
        }
    }
    
    // Step 3: Write to new file
    ofstream writeFile("output.txt");
    if (!writeFile) {
        cout << "Cannot create output file!" << endl;
        return 0;
    }
    
    // Write all sorted names and numbers
    for (int i = 0; i < totalItems; i++) {
        writeFile << names[i] << " " << numbers[i] << endl;
    }
    writeFile.close();
    
    cout << "Done! Check output.txt for sorted list" << endl;
    return 0;
}
