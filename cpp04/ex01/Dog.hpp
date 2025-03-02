#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Cat.hpp"

class Dog : public Animal
{
    private:
    Brain* dog_brain;
    public:
    Dog();
    Dog(const Dog& other);
    ~Dog();
    void makeSound() const;
    // Brain& get_brain();
    // void set_brain(Brain &brain);
};

#endif