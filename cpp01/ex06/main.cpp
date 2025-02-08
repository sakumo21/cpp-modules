#include "Harl.hpp"

int translate_level(std::string level)
{
    std::string	comlvl[4] = {"WARNING", "INFO", "ERROR", "DEBUG"};

    for (int i = 0; i < 4; i++)
        if (level == comlvl[i])
            return i;
    return -1;
}

void test(std::string level)
{
    Harl a;

    switch(translate_level(level))
    {
    case 0:
        a.complain("WARNING");
    case 1:
        a.complain("INFO");
    case 2:
        a.complain("ERROR");
    case 3:
        a.complain("DEBUG");
        break ;
    default:
        std::cout << "please select one from the four" << std::endl;
    }
}

int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "ERROR: not enough arguments!" << std::endl;
    else
        test(av[1]);
}