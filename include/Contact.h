// include/Contact.h

#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
public:
    std::string name;
    std::string email;
    std::string phoneNumber;

    Contact(std::string name, std::string email, std::string phoneNumber);
};

#endif 
