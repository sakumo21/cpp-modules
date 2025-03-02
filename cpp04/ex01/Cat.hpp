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
    ~Cat();
    void makeSound() const;
    // Brain& get_brain();
    // void set_brain(Brain &brain);
};


#endif