#include "Replicate.hpp"

Replicate::Replicate(std::string filename): o_file(filename)
{
    r_file = o_file + ".replace";
}
Replicate::~Replicate()
{
}

std::string after_string(std::string line, size_t i)
{
    std::string sub = line.substr(i);
    return (sub); 
}

std::string before_string(std::string line, int i)
{
    std::string sub = line.substr(0, i);
    return (sub);
}

void	Replicate::replace(std::string s1, std::string s2)
{
	std::string line;
    size_t      i;
    size_t      pos = 0;

    std::ifstream inputFile(o_file.c_str());
    if (!inputFile.is_open())
    {
    	std::cerr << "Failed to open the file for reading!" << "\n";
    	return ;
    }
    std::ofstream outputFile(r_file.c_str());
    if (!outputFile.is_open())
    {
    	std::cerr << "Failed to open the file for writing!" << "\n";
    	return ;
    }
	while (std::getline(inputFile, line))
    {
        pos = 0;
        if (!s1.empty() && s1 != s2)
        {
            i = line.find(s1, pos);
            while (i != std::string::npos)
            {
                line.erase(i, s1.length());
                line.insert(i, s2);
                pos = i + s2.length();
                i = line.find(s1, pos);
            }
            outputFile << line << std::endl;
        }
        else
            outputFile << line << std::endl;
    }
    outputFile.close();
    inputFile.close();
}
