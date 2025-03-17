#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
    Brain* cat_brain;
    public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    void setidea(int i, std::string idea);
    std::string getidea(int i);
    ~Cat();
    void makeSound() const;

};


#endif