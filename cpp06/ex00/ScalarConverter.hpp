#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <iomanip>
#include <float.h>
#include <climits>
class ScalarConverter
{
    private:
        ScalarConverter(); 
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &copy);
        ~ScalarConverter();
        public:
        static void convert(const std::string &literal);
      
};

#endif