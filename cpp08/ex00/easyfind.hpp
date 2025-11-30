#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>


template<typename T> int easyfind(T cont, int occ)
{
    if (std::find(cont.begin(), cont.end(), occ) != cont.end())
        return 1;
    return 0;
}

#endif