#include "Replicate.hpp"

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
    std::string b_line;
    std::string sep_line;
    std::string new_line;
    int         i;

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
        i = line.find(s1);
        new_line = line;
        while (i >= 0)
        {
            if (i == 0)
            {
                sep_line = after_string(new_line, s1.length());
                new_line = s2 + sep_line;
            }
            else if (i > 0)
            {
                b_line = before_string(new_line, i);
                sep_line = after_string(new_line,i + s1.length());
                new_line = b_line + s2 + sep_line;
            }
            i = new_line.find(s1);
        }
        outputFile << new_line << std::endl;
    }
    outputFile.close();
    inputFile.close();
}