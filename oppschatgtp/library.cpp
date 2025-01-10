#include <iostream>
#include <string>
#include <vector>
using namespace std;

class LibraryItem {
protected:
    string title;
    int itemID;
    bool isCheckedOut;

public:
    // Constructor
    LibraryItem(string title, int itemID) {
        cin >> title;
        cin >> itemID;
    }

    // Virtual methods
    virtual void checkOut() {
        
    }

    virtual void returnItem() {
               
         }

    virtual void displayInfo() = 0;  // Pure virtual function
};

class Book : public LibraryItem {
private:
    string author;
    int pages;

public:
    // Constructor
    Book(string title, int itemID, string author, int pages) 
        : LibraryItem(title, itemID) {
        // Your code here
    }

    void displayInfo() override {
        // Your code here
    }
};

class DVD : public LibraryItem {
private:
    string director;
    int duration;  // in minutes

public:
    // Constructor
    DVD(string title, int itemID, string director, int duration) 
        : LibraryItem(title, itemID) {
        // Your code here
    }

    void displayInfo() override {
        // Your code here
    }
};

class Library {
private:
    vector<LibraryItem*> items;

public:
    void addItem(LibraryItem* item) {
        // Your code here
    }

    void checkOutItem(int itemID) {
        // Your code here
    }

    void returnItem(int itemID) {
        // Your code here
    }

    void displayAllItems() {
        // Your code here
    }
};

int main() {
    Library library;

    // Create some books and DVDs
    Book* book1 = new Book("The Catcher in the Rye", 1, "J.D. Salinger", 234);
    Book* book2 = new Book("To Kill a Mockingbird", 2, "Harper Lee", 281);
    DVD* dvd1 = new DVD("The Matrix", 3, "Wachowski Brothers", 136);

    // Add items to library
    library.addItem(book1);
    library.addItem(book2);
    library.addItem(dvd1);

    // Test the functionality
    library.displayAllItems();
    cout << "\nChecking out item ID 1...\n";
    library.checkOutItem(1);
    library.displayAllItems();

    cout << "\nReturning item ID 1...\n";
    library.returnItem(1);
    library.displayAllItems();

    // Clean up
    delete book1;
    delete book2;
    delete dvd1;

    return 0;
}
