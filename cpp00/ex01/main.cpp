#include "PhoneBook.hpp"

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
            if (mycontact.count > 0)
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