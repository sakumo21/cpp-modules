#include "Dog.hpp"
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

    animals[0]->setidea(0, "am a cat maaan");
    std::cout << animals[0]->getidea(0); << std::endl;
    std::cout << animals[0]->getidea(1); << std::endl;

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