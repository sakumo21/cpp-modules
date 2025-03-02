#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    hit_point = 100;
    energy_pts = 50;
    att_damage = 20;
    std::cout << "Scavtrap with the name " << name << "has been created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor has been called!" << std::endl;
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