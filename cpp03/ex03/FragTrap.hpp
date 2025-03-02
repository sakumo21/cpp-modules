#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap :virtual public ClapTrap
{
    public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    void highFivesGuys(void);
    void get_stats();
};

#endif