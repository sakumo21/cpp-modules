#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default Constructor has been created!" << std::endl;
    this->name = "default";
    hit_point = 100;
    energy_pts = 50;
    att_damage = 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    hit_point = 100;
    energy_pts = 50;
    att_damage = 20;
    std::cout << "Scavtrap with the name " << name << "has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "Copy constructor called!" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = other.name;
    this->hit_point = other.hit_point;
    this->energy_pts = other.energy_pts;
    this->att_damage = other.att_damage;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor has been called!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (hit_point > 0 || energy_pts == 0)
    {
        energy_pts--;
        std::cout << name << "'s ScavTrap has attacked " << target << ", causing him to lose " << att_damage << " hit_points!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::get_stats()
{
    std::cout << "       --------------" << name << "---------------         " << std::endl;
    std::cout << "hit points: " << hit_point << std::endl;
    std::cout << "energy points: " << energy_pts << std::endl;
    std::cout << "attack damage: " << att_damage << std::endl;
    std::cout << "       -----------------------------         " << std::endl;
}