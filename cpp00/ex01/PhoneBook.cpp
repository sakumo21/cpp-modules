#include <iostream>
#include <cstring>
#include <sstream>

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

int main()
{
    PhoneBook mycontact;
    std::string input;
    mycontact.count = 0;
    int i = 0;

    while(1)
    {
        std::cout << "->";
        std::cin >> input;
        std::cin.clear();
        if (i == 8)
            i = 0;
        if (input == "SEARCH")
        {
            mycontact.show_user(mycontact);
            mycontact.show_details(mycontact);
        }
        else if (input == "ADD")
        {
            mycontact.PhoneContact[i % 8].add_user(&mycontact.PhoneContact[i % 8]);
            if (mycontact.count <= 8)
                mycontact.count++;
            i++;
        }
        else if (input == "EXIT")
            break;
    }

}