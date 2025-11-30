#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <iomanip>

template <typename T, typename F> 
void iter(T* array, size_t len, F f)
{
    for (size_t i = 0; len > i; i++)
        f(array[i]);
}

template <typename T> void iter(const T* array, size_t len, void (*f)(T))
{
    for (size_t i = 0; len > i; i++) 
        f(array[i]);
}

#endif