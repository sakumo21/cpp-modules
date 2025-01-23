#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
    public:
        void announce( void );
        std::string *get_name( void ) { return (&name)};
    private:
        std::string name;
};

#endif