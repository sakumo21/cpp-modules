#include "Array.hpp"

template <typename T> Array<T>::Array()
{
    array = new T;
}

template <typename T> Array<T>::Array(unsigned int n)
{
    array = new[] T(n);
}

template <typename T> Array<T>::Array(const Array &copy)
{
    this->
}

template <typename T> Array<T>& Array<T>::operator=(const Array<T> &copy)
{

}

template <typename T> Array<T>::~Array()
{
    std::cout << "xaxa" << std::endl;
}