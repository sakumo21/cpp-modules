#include "HumanA.hpp"

HumanA::HumanA(std::string NewName, Weapon &newType): type(newType), name(NewName)
{}

HumanA::~HumanA()
{}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << type.getType() << "\n";
}