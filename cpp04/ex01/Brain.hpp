#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
    std::string ideas[100];

    public:
    Brain();
    Brain& operator=(const Brain& other);
    ~Brain();
    Brain(const Brain& other);
    void setidea(int i, std::string idea);
    std::string getidea(int i) const;
};

#endif