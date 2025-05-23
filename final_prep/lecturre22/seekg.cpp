#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open file for both reading and writing, starting at the end
    fstream file("data.txt", ios::in | ios::out | ios::ate);

    if (!file) {
        cout << "Failed to open file!" << endl;
        return 1;
    }

    // Add new content at the end
    file << "\nThis text was added at the end.\n";

    // Go back to start to read the whole file
    file.seekg(0);

    // Display file contents
    cout << "\nFile contents:\n";
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}