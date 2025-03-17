#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor has been created!" << std::endl;
    this->name = "default";
    hit_point = 10;
    energy_pts = 10;
    att_damage = 3;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor has been created!" << std::endl;
    this->name = name;
    hit_point = 10;
    energy_pts = 10;
    att_damage = 3;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called!" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = other.name;
    this->hit_point = other.hit_point;
    this->energy_pts = other.energy_pts;
    this->att_damage = other.att_damage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor has been called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (hit_point > 0 || energy_pts == 0)
    {
        energy_pts--;
        std::cout << name << "'s ClapTrap has attacked " << target << ", causing him to lose " << att_damage << " hit_points!" << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_point > 0)
    {
        hit_point -= amount;
        if (hit_point <= 0)
        std::cout << name << "is dead!" << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_point > 0 || energy_pts == 0)
    {
        energy_pts--;
        if (hit_point < 10)
        {
            if (hit_point + amount > 10)
                hit_point += hit_point + amount - 10;
            else
                hit_point += amount;
        }
        std::cout << name << "has healed!" << std::endl;
    }
}

void ClapTrap::get_stats()
{
    std::cout << "       --------------" << name << "---------------         " << std::endl;
    std::cout << "hit points: " << hit_point << std::endl;
    std::cout << "energy points: " << energy_pts << std::endl;
    std::cout << "attack damage: " << att_damage << std::endl;
    std::cout << "       -----------------------------         " << std::endl;
}