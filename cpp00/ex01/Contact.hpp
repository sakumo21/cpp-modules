#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstring>
#include <sstream>
#include <iomanip>

class Contact{
    public:
        void add_user();
        std::string get_FirstName();
        std::string get_LastName();
        std::string get_NickName();
        std::string get_PhoneNumber();
        std::string get_DarkestSecret();
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret; 
};

#endif