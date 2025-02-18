#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap :public ClapTrap
{
    private:
    std::string name;
    int         hit_point;
    int         energy_pts;
    int         att_damage;
    public:
    FragTrap(std::string name, std::string parentname);
    ~FragTrap();
    void highFivesGuys(void);
    void get_stats();
};

#endif