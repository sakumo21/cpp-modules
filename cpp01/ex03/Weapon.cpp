#include "Weapon.hpp"

Weapon::Weapon(std::string in_type)
{
    type = in_type;
}
const std::string& Weapon::getType() 
{
    return (type);
}
void    Weapon::setType(std::string newtype) 
{
    type = newtype;
}