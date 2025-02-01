#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"
class HumanA
{
    public:
    HumanA(std::string NewName, Weapon &newType): type(newType), name(NewName) {}
    ~HumanA();
    void attack();
    private:
    Weapon &type;
    std::string name;

};

#endif