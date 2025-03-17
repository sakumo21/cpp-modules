#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = "Default";
    hit_point = 100;
    energy_pts = 100;
    att_damage = 30;
    std::cout << "Fragtrap with the name Default has been created!" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    hit_point = 100;
    energy_pts = 100;
    att_damage = 30;
    std::cout << "FragTrap with the name " << name << "has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout << "Copy constructor called!" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = other.name;
    this->hit_point = other.hit_point;
    this->energy_pts = other.energy_pts;
    this->att_damage = other.att_damage;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor has been called!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << name << "has requested a high five with you (don't be shy😝)" << std::endl;
}

void FragTrap::get_stats()
{
    std::cout << "       --------------" << name << "---------------         " << std::endl;
    std::cout << "hit points: " << hit_point << std::endl;
    std::cout << "energy points: " << energy_pts << std::endl;
    std::cout << "attack damage: " << att_damage << std::endl;
    std::cout << "       -----------------------------         " << std::endl;
}