#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <iomanip>

template <typename T> class Array
{
    private:
    T* array;
    public:
        Array(); 
        Array(unsigned int n);
        Array(const Array &copy);
        Array &operator=(const Array &copy);
        ~Array();
};

#endif