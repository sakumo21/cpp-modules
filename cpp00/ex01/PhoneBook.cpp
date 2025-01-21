#include "PhoneBook.hpp"

void formatting_right(std::string line)
{
    std::cout << "|";
    int len = strlen(line.c_str());
    if (len < 10)
    {
        std::cout << line;
        for (int i = 0; i < 10 - len; i++)
            std::cout << " ";
    }
    else if (len > 10)
    {
        for (int i = 0; i < 9; i++)
        {
            std::cout << line[i];
        }
        std::cout << ".";
    }
    else
        std::cout << line;
}
void print_index(int index)
{
    std::cout << index;
    for (int i = 0; i < 10; i++)
        std::cout << " ";
}

void PhoneBook::show_details(PhoneBook MyPhoneBook)
{
    int  con_to_int;
    char contact_required;

    std::cout << "enter your required contact:";
    std::cin >> contact_required;
    std::cin.clear();
    con_to_int = contact_required - '0';
    if (isalpha(contact_required) || MyPhoneBook.count < con_to_int)
    {
        std::cout << "ERROR: this contact is invalid!\n";
        return ;
    }
    std::cout << "FirstName: " << MyPhoneBook.PhoneContact[con_to_int].FirstName << "\n";
    std::cout << "LastName: " << MyPhoneBook.PhoneContact[con_to_int].LastName << "\n";
    std::cout << "Nickname: " << MyPhoneBook.PhoneContact[con_to_int].Nickname << "\n";
    std::cout << "PhoneNumber: " << MyPhoneBook.PhoneContact[con_to_int].PhoneNumber << "\n";
    std::cout << "DarkestSecret: " << MyPhoneBook.PhoneContact[con_to_int].get_DarkestSecret(PhoneContact[con_to_int]) << "\n";
}

void PhoneBook::show_user(PhoneBook PhoneB)
{
    int i = 0;
    formatting_right("Index");
    formatting_right("FirstName");
    formatting_right("LastName");
    formatting_right("NickName");
    formatting_right("PhoneNum");
    std::cout << "|" << "\n";
    while (i < PhoneB.count)
    {
        print_index(i);
        formatting_right(PhoneB.PhoneContact[i].FirstName);
        formatting_right(PhoneB.PhoneContact[i].LastName);
        formatting_right(PhoneB.PhoneContact[i].Nickname);
        formatting_right(PhoneB.PhoneContact[i].PhoneNumber);
        std::cout << "|" << "\n";
        i++;
    }
}
