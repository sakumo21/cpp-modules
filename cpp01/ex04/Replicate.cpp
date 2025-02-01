#include "Replicate.hpp"

void	Replicate::replace(std::string s1, std::string s2)
{
	std::string line;
    std::ifstream inputFile(o_file);
    if (!inputFile.is_open())
    {
    	std::cerr << "Failed to open the file for reading!" << "\n";
    	return ;
    }
	while (std::getline(inputFile, line))
    std::cout << line << "\n";
}