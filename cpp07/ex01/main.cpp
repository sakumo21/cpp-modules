#include "iter.hpp"

template <typename T> void f(T x)
{
    std::cout << x << std::endl;
}

int main( void )
{
    std::string *a = new std::string[2];
    a[0] = "niggaballs", a[1] = "younessgay15";

    ::iter(a, 2, f);
}