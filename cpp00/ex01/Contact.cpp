#include "PhoneBook.hpp"

void Contact::add_user(Contact *contact)
{
    std::cin.ignore();
    std::cout << "FirstName: ";
    std::getline(std::cin, contact->FirstName);
    std::cout << "LastName: ";
    std::getline(std::cin, contact->LastName);
    std::cout << "Nickname: ";
    std::getline(std::cin, contact->Nickname);
    std::cout << "PhoneNumber: ";
    std::getline(std::cin, contact->PhoneNumber);
    std::cout << "DarkestSecret: ";
    std::getline(std::cin, contact->DarkestSecret);
}