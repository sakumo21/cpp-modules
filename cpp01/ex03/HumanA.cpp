#include "HumanA.hpp"

HumanA::~HumanA()
{}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << type.getType() << "\n";
}