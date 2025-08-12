#include "Array.hpp"

template <typename T> Array<T>::Array(): _size(0)
{
    array = new T[0];
}

template <typename T> Array<T>::Array(unsigned int n): _size(n)
{
    array = new T[n];
}

template <typename T> Array<T>::Array(const Array &copy) : _size(copy._size)
{
    array = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
        array[i] = copy.array[i];
}

template <typename T> Array<T>& Array<T>::operator=(const Array<T> &copy)
{
    delete this->array;
    this->_size = copy._size;
    array = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
        array[i] = copy.array[i];
    return *this;
}

template <typename T> T& Array<T>::operator[](unsigned int index)
{
    if (index > _size)
        throw (std::out_of_range("Index out of bounds"));
    return (array[index]);
}


template <typename T> const T& Array<T>::operator[](unsigned int index) const
{
    if (index > _size)
        throw (std::out_of_range("Index out of bounds"));
    return (array[index]);
    
}

template <typename T> size_t Array<T>::size()
{
    return _size;
}

template <typename T> Array<T>::~Array()
{
   delete[] array;
}