#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
    map<string, string> mp;

    mp["haad"] = "9233355544";
    mp["ali"] = "9213632554";
    
    mp["ahmed"] = "9231353666";

    int choice;
    string name, number;

    do {
        cout << "1. View all contacts\n";
        cout << "2. Add a new contact\n";
        cout << "3. Delete a contact\n";
        cout << "4. Search a contact by name\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (auto contact : mp) {
                    cout << "Name: " << contact.first << "\nNumber: " << contact.second << "\n\n";
                }
                break;

            case 2:
                cout << "Add a new contact\nEnter the name: ";
                cin >> name;
                cout << "Enter the number: ";
                cin >> number;
                mp[name] = number;
                cout << "New contact added\n";
                for (auto contact : mp) {
                    cout << "Name: " << contact.first << "\nNumber: " << contact.second << "\n\n";
                }
                break;

            case 3:
                cout << "Enter the name of the contact you want to delete: ";
                cin >> name;
                mp.erase(name);
                cout << "Erased successfully\n";
                for (auto contact : mp) {
                    cout << "Name: " << contact.first << "\nNumber: " << contact.second << "\n\n";
                }
                break;

            case 4:
                cout << "Enter the name you want to see the number for: ";
                cin >> name;
                cout << "Number: " << mp[name] << endl;
                break;

            case 5:
                cout << "Exiting\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
