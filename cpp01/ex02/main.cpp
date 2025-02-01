#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;
    std::cout << "address of brain         :" << &brain << "\n";
    std::cout << "address held by stringPTR:" << &stringPTR << "\n";
    std::cout << "address held by stringREF:" << &stringREF << "\n";
    std::cout << "-----------------------------------------" << "\n";
    std::cout << "The value of brain               :" << brain << "\n";
    std::cout << "The value pointed to by stringPTR:" << *stringPTR << "\n";
    std::cout << "The value pointed to by stringREF:" << stringREF << "\n";
}