#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();

    // delete j;
    // delete i;
    const Animal *animals[10];
    for (int i = 0; i < 5; i++)
    {
        animals[i] = new Cat();
    }
    for (int i = 5; i < 10; i++)
    {
        std::cout << "animals[" << i << "]" << std::endl;
        animals[i] = new Dog();
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << "animals[" << i << "]" << std::endl;
        delete animals[i];
    }
    for (int i = 5; i < 10; i++)
    {
        std::cout << "animals[" << i << "]" << std::endl;
        delete animals[i];
    }
}