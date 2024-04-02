// include/ContactManager.h

#ifndef CONTACTMANAGER_H
#define CONTACTMANAGER_H

#include "Contact.h"
#include <vector>

void displayMenu();
void addContact();
void viewAllContacts();
void modifyContact();
void deleteContact();
std::vector<Contact> loadContacts();
void saveContacts(const std::vector<Contact>& contacts);

#endif // CONTACTMANAGER_H
