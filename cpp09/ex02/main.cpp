#include "PmergeME.hpp"
#include <ctime>
#include <iostream>

int main(int argc, char** argv)
{
    if (argc > 1)
    {
        try
        {
            PmergeME pmerge(argv);
            pmerge.sort();
        }
        catch (const std::exception& e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
            return 1;
        }
    }
    else
        std::cerr << "Usage: ./PmergeME <positive integers>" << std::endl;
    return 0;
}