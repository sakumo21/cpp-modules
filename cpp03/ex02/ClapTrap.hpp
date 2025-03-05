#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:

    std::string name;
    int         hit_point;
    int         energy_pts;
    int         att_damage;
    public:

    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap();
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void get_stats();
};

#endif