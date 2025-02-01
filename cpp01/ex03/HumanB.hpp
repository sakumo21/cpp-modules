#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"
class HumanB 
{
    public:
    HumanB(std::string NewName): name(NewName) {}
    ~HumanB();
    void attack();
    void setWeapon(Weapon &setType);
    private:
    Weapon *type;
    std::string name;

};

#endif