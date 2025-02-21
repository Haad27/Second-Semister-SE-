#include <iostream>
#include <string>
#include <vector>

using namespace std;

class book
{
private:
    string title;
    string author;
    int price;

public:
    // Setters
    void setTitle(string t)
    {
        title = t;
    }

    void setAuthor(string a)
    {
        author = a;
    }

    void setPrice(int p)
    {
        price = p;
    }

    // Getters
    string getTitle()
    {
        return title;
    }

    string getAuthor()
    {
        return author;
    }

    int getPrice()
    {
        return price;
    }

    // Display method
    void displayBook()
    {
        cout << "The title is: " << getTitle() << endl
             << "The author is: " << getAuthor() << endl
             << "The price is: $" << getPrice() << endl
             << endl;
    }
};

int main()
{
    book books;

    // Using individual setters
    books.setTitle("Persuasion");
    books.setAuthor("Viss Cross");
    books.setPrice(3000);
    books.displayBook();

    // Setting values for second book
    books.setTitle("Zero to One");
    books.setAuthor("Peter Thiel");
    books.setPrice(1000);
    books.displayBook();

    // Setting values for third book
    books.setTitle("Art of War");
    books.setAuthor("Sun Zu");
    books.setPrice(9000);
    books.displayBook();

    return 0;
}
