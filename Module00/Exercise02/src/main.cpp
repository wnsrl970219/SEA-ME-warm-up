// main.cpp
#include "OldPhoneBook.hpp"

using namespace std;

int main() {
    OldPhoneBook phoneBook;
    int choice;

    do {
        cout << "\nOld PhoneBook Menu:\n";
        cout << "1. ADD Contact\n";
        cout << "2. SEARCH Contacts\n";
        cout << "3. REMOVE Contact\n";
        cout << "4. BOOKMARK Contacts\n";
        cout << "5. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                phoneBook.addContact();
                break;
            case 2:
                phoneBook.searchContacts();
                break;
            case 3:
                phoneBook.removeContact();
                break;
            case 4:
                phoneBook.showBookmarkedContacts();
                break;
            case 5:
                phoneBook.exitProgram();
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
