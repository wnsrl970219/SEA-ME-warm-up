// PhoneBook.hpp
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class OldPhoneBook {
private:
    std::vector<std::vector<std::string>> contacts; // vector of vectors of strings: {name, phone, nickname, "bookmark_status"}
public:
    void addContact();               // Add a new contact
    void searchContacts();           // Search and display contacts
    void removeContact();            // Remove a contact by index
    void showBookmarkedContacts();   // Display bookmarked contacts
    void exitProgram();              // Exit the program
};

#endif // PHONEBOOK_HPP
