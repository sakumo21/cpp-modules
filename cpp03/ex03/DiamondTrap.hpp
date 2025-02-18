#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
    std::string name;
    int         hit_point;
    int         energy_pts;
    int         att_damage;
    public:
    DiamondTrap(std::string name);
    ~DiamondTrap();
    void attack();
    void whoAmI();
};
#endif