#include "Contact.hpp"

std::string Contact::get_FirstName()
{
    return FirstName;
}
std::string Contact::get_LastName()
{
    return LastName;
}
std::string Contact::get_NickName()
{
    return NickName;
}
std::string Contact::get_PhoneNumber()
{
    return PhoneNumber;
}
std::string Contact::get_DarkestSecret()
{
    return DarkestSecret;
}

void Contact::add_user()
{
    std::cin.ignore();
    std::cout << "FirstName: ";
    std::getline(std::cin, FirstName);
    std::cout << "LastName: ";
    std::getline(std::cin, LastName);
    std::cout << "Nickname: ";
    std::getline(std::cin, NickName);
    std::cout << "PhoneNumber: ";
    std::getline(std::cin, PhoneNumber);
    std::cout << "DarkestSecret: ";
    std::getline(std::cin, DarkestSecret);
}
