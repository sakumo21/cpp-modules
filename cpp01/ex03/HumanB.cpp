#include "HumanB.hpp"

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon &setType)
{

    type = &setType;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << type->getType() << "\n";
}
