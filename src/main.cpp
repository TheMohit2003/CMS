
#include "ContactManager.h"

int main() {
    int choice;
    do {
        displayMenu();
        std::cin >> choice;
        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                viewAllContacts();
                break;
            case 3:
                modifyContact();
                break;
            case 4:
                deleteContact();
                break;
            case 0:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
