#include "Replicate.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
        std::cerr << "ERROR!: NOT ENOUGH PARAMETERS!" << "\n";
    else
    {
        Replicate newfile(av[1]);
        newfile.replace(av[2], av[3]);
    }
}