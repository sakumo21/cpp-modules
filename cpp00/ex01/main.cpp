#include "PhoneBook.hpp"

int main()
{
    PhoneBook mycontact;
    std::string input;
    mycontact.count = 0;
    int i = 0;


    std::cout << "->";
    while(std::cin >> input)
    {
        if (i == 8)
            i = 0;
        if (input == "SEARCH")
        {
            mycontact.show_user();
            if (mycontact.count > 0)
                mycontact.show_details();
        }
        else if (input == "ADD")
        {
            mycontact.PhoneContact[i % 8].add_user();
            if (mycontact.count <= 8)
                mycontact.count++;
            i++;
        }
        else if (input == "EXIT")
            break;
        std::cout << "->";
    }

}
