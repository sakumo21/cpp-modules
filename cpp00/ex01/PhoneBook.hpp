#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
    public:
    Contact PhoneContact[8];
    int     count;
    void show_user();
    void show_details();
};

#endif