#include <iostream>
#include <string>
using namespace std;

class Text {
private:
    string text;

public:
    Text(string x) {
        text = x;
    }

    // Overload equality operator
    bool operator==(const Text& t) {
        return text == t.text;
    }

    // Overload less-than operator
    bool operator<(const Text& t) {
        return text < t.text;
    }

    // Overload greater-than operator
    bool operator>(const Text& t) {
        return text > t.text;
    }

    // Concatenate with another Text object
    Text operator+(const Text& t) {
        return Text(text + t.text);
    }

    string display() {
        return text;
    }
};

int main() {
    string sentence1;
    string sentence2;

    cout << "Enter first sentence: ";
    getline(cin, sentence1);

    cout << "Enter the second sentence: ";
    getline(cin, sentence2);

    Text text1(sentence1);
    Text text2(sentence2);

    if (text1 == text2) {
        cout << "Both sentences are the same.\n";
    } else if (text1 < text2) {
        cout << "First sentence is less than the second.\n";
    } else if (text1 > text2) {
        cout << "First sentence is greater than the second.\n";
    }

    // Concatenate and display
    Text text3 = text1 + text2;
    cout << "Concatenated result: " << text3.display() << endl;

    return 0;
}
