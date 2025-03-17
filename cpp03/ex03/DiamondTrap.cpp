#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->name = "default";
	hit_point = FragTrap::hit_point;
    energy_pts = ScavTrap::energy_pts;
    att_damage = FragTrap::att_damage;
    std::cout << "DiamondTrap with the name Default has been created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap with the name " << name << "has been created!" << std::endl;
	DiamondTrap::name = name;
	hit_point = FragTrap::hit_point;
    energy_pts = ScavTrap::energy_pts;
    att_damage = FragTrap::att_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    std::cout << "Copy constructor called!" << std::endl;
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = other.name;
    this->hit_point = other.hit_point;
    this->energy_pts = other.energy_pts;
    this->att_damage = other.att_damage;
    return *this;
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

void DiamondTrap::get_stats()
{
    std::cout << "       --------------" << name << "---------------         " << std::endl;
    std::cout << "hit points: " << hit_point << std::endl;
    std::cout << "energy points: " << energy_pts << std::endl;
    std::cout << "attack damage: " << att_damage << std::endl;
    std::cout << "       -----------------------------         " << std::endl;
}
