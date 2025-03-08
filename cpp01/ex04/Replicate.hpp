#ifndef REPLICATE_HPP
#define REPLICATE_HPP

#include <iostream>
#include <fstream>

class Replicate
{
    public:
    Replicate(std::string filename);
    ~Replicate();
    void replace(std::string s1, std::string s2);
    private:
    std::string o_file;
    std::string r_file;
};

#endif