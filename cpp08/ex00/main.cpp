#include "easyfind.hpp"

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> vec(arr, arr + 5);
    if (easyfind(vec, 3))
        std::cout << "Found!" << std::endl;
    if (!easyfind(vec, 6))
        std::cout << "Not Found!" << std::endl;
    return 0;
}