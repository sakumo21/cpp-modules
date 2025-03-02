#include "PhoneBook.hpp"

void formatting_right(std::string line)
{
    std::cout << "|";
    int len = strlen(line.c_str());
    if (len < 10)
    {
        std::cout << std::setw(10);
        std::cout << line;
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
    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << index;
}

void PhoneBook::show_details()
{
    int  con_to_int;
    char contact_required;

    std::cout << "enter your required contact:";
    std::cin >> contact_required;
    std::cin.ignore(1000, '\n');
    if (std::cin.eof())
        return ;
    con_to_int = contact_required - '0';
    if (isalpha(contact_required) || count - 1 < con_to_int)
    {
        std::cout << "ERROR: this contact is invalid!\n";
        return ;
    }
    std::cout << "FirstName: " << PhoneContact[con_to_int].get_FirstName() << "\n";
    std::cout << "LastName: " << PhoneContact[con_to_int].get_LastName() << "\n";
    std::cout << "Nickname: " << PhoneContact[con_to_int].get_NickName() << "\n";
    std::cout << "PhoneNumber: " << PhoneContact[con_to_int].get_PhoneNumber() << "\n";
    std::cout << "DarkestSecret: " << PhoneContact[con_to_int].get_DarkestSecret() << "\n";
}

void PhoneBook::show_user()
{
    int i = 0;
    formatting_right("Index");
    formatting_right("FirstName");
    formatting_right("LastName");
    formatting_right("NickName");
    formatting_right("PhoneNum");
    std::cout << "|" << "\n";
    while (i < count)
    {
        print_index(i);
        formatting_right(PhoneContact[i].get_FirstName());
        formatting_right(PhoneContact[i].get_LastName());
        formatting_right(PhoneContact[i].get_NickName());
        formatting_right(PhoneContact[i].get_PhoneNumber());
        std::cout << "|" << "\n";
        i++;
    }
}
