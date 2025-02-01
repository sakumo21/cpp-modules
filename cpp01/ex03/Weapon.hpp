#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
    public:
    Weapon(std::string in_type) {type = in_type;}
    const std::string getType() {return (type);}
    void    setType(std::string newtype) {type = newtype;}
    private:
    std::string type;
};

#endif