#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>


template<typename T> void easyfind(T cont, int occ)
{
    if (std::find(cont.begin(), cont.end(), occ) != cont.end())
        std::cout << "Found. " << std::endl;
    else
        std::cout << "Not found. " << std::endl;
}

#endif