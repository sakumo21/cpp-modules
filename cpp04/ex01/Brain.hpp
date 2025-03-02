#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
    std::string ideas[100];

    public:
    Brain();
    ~Brain();
    Brain(const Brain& other);
    // void setidea(std::string &idea, int index);
    // std::string getidea(int index);
};

#endif