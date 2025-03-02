#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
    std::string type;
    public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    ~WrongAnimal();
    virtual void makeSound() const;
    std::string getType() const;
};

#endif