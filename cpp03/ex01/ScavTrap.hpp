#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
    std::string name;
    int         hit_point;
    int         energy_pts;
    int         att_damage;
    public:
    ScavTrap(std::string name, std::string parentname);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
    void get_stats();
};

#endif