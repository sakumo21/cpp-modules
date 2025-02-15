#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <sstream>
#include <iomanip>

class Contact{
    public:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        void add_user(Contact *mycontact);
        std::string get_DarkestSecret(Contact c){return c.DarkestSecret;};
    private:
        std::string DarkestSecret; 
};
class PhoneBook{
    public:
    Contact PhoneContact[8];
    int     count;
    void show_user(PhoneBook MyPhoneBook);
    void show_details(PhoneBook MyPhoneBook);
};

#endif