// PhoneBook.cpp
#include "OldPhoneBook.hpp"
#include "ConvertToUpper.h"

using namespace std;

void OldPhoneBook::addContact() {
    string name, phone, nickname;
    cout << "Enter Name: ";
    cin >> name;
    ConvertToUpper(name);
    cout << "Enter Phone Number (unique): ";
    cin >> phone;
    cout << "Enter Nickname: ";
    cin >> nickname;
    ConvertToUpper(nickname);

    for (const auto& contact : contacts) {
        if (contact[1] == phone) {
            cout << "This Phone number already exists!" << endl;
            return;
        }
    }

    contacts.push_back({name, phone, nickname, "0"}); // "0" indicates not bookmarked
    cout << "Contact added!" << endl;
}

void OldPhoneBook::searchContacts() {
    if (contacts.empty()) {
        cout << "No contacts found!" << endl;
        return;
    }

    cout << "Contacts List:" << endl;
    for (size_t i = 0; i < contacts.size(); ++i) {
        cout << i + 1 << ". " << contacts[i][0] << " (" << contacts[i][1] << ")" << endl;
    }

    size_t index;
    cout << "Enter the index to see detail or 0 to go back: ";
    cin >> index;

    if (index == 0) return;

    if (index < 1 || index > contacts.size()) {
        cout << "Invalid index!" << endl;
        return;
    }

    const auto& contact = contacts[index - 1];
    cout << "Name: " << contact[0] << endl;
    cout << "Phone Number: " << contact[1] << endl;
    cout << "Nickname: " << contact[2] << endl;
    cout << "Bookmarked: " << (contact[3] == "1" ? "Yes" : "No") << endl;

    char bookmarkChoice;
    cout << "Do you want to bookmark this contact? (y/n): ";
    cin >> bookmarkChoice;

    if (bookmarkChoice == 'y') {
        contacts[index - 1][3] = "1"; // Set bookmark status to "1"
        cout << "Contact bookmarked!" << contacts[index - 1][3] << endl;
    }
}

void OldPhoneBook::removeContact() {
    size_t index;
    cout << "Enter the index to remove: ";
    cin >> index;

    if (index < 1 || index > contacts.size()) {
        cout << "Invalid index!" << endl;
        return;
    }

    contacts.erase(contacts.begin() + index - 1);
    cout << "Contact removed!" << endl;
}

void OldPhoneBook::showBookmarkedContacts() {
    if (contacts.empty()) {
        cout << "No contacts" << endl;
        return;
    }

    bool found = false;
    for (const auto& contact : contacts) {
        if (contact[3] == "1") {
            cout << "Name: " << contact[0] << ", Phone: " << contact[1] << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No bookmarked contacts!" << endl;
    }
}

void OldPhoneBook::exitProgram() {
    cout << "Exiting the program..." << endl;
}
