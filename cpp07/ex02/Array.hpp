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
    unsigned int _size;
    public:
        Array(); 
        Array(unsigned int n);
        Array(const Array &copy);
        Array &operator=(const Array &copy);
        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;
        size_t size();
        ~Array();
};


#include "Array.tpp"

#endif