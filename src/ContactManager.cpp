// src/ContactManager.cpp

#include "ContactManager.h"
#include <iostream>
#include <fstream>
#include <sstream>

// Example: Add a new contact
void addContact() {
    std::string name, email, phoneNumber;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter email: ";
    std::cin >> email;
    std::cout << "Enter phone number: ";
    std::cin >> phoneNumber;

    Contact newContact(name, email, phoneNumber);
    std::vector<Contact> contacts = loadContacts();
    contacts.push_back(newContact);
    saveContacts(contacts);
}

// Example: Save contacts to file
void saveContacts(const std::vector<Contact>& contacts) {
    std::ofstream file("data/contacts.txt", std::ios::trunc);
    for (const auto& contact : contacts) {
        file << contact.name << "," << contact.email << "," << contact.phoneNumber << "\n";
    }
    file.close();
}
