#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->name = "default";
	hit_point = FragTrap::hit_point;
    energy_pts = ScavTrap::energy_pts;
    att_damage = FragTrap::att_damage;
    std::cout << "Scavtrap with the name Default has been created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap with the name " << name << "has been created!" << std::endl;
	DiamondTrap::name = name;
	hit_point = FragTrap::hit_point;
    energy_pts = ScavTrap::energy_pts;
    att_damage = FragTrap::att_damage;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor has been called!" << std::endl;
}
void DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
	std::cout << "Hola! I'am " <<  DiamondTrap::name << " I'am a DiamondTrap and this ClapTrap is " << ClapTrap::name << std::endl;
}