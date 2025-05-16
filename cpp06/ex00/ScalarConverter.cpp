#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter()
{

}

int check_float(std::string literal)
{
    int p = 0;
    size_t sign = 0;
    if ((literal[sign] == '-' || literal[sign] == '+') && literal.length() > 1)
        sign++;
    if (literal[literal.length() - 1] != 'f')
        return 0;
    for(size_t i = sign; i < literal.length(); i++)
    {
        if(!std::isdigit(literal[i]) && literal[i] != '.' && literal[i] != 'f')
            return 0;
        else if (literal[i] == '.' && i == literal.length() - 1)
            return 0;
        else if (literal[i] == 'f' && i != literal.length() - 1)
            return 0;
        else if (literal[i] == 'f' && i == 0)
            return 0;
        else if (literal[i] == '.' && i == 0)
            return 0;
        else if (literal[i] == '.' && i != literal.length() - 1)
            p++;
    }
    if (p > 1)
        return 0;
    else
        return 1;
}

int check_double(std::string literal)
{
    int p = 0;//how many .
    size_t sign = 0;
    if ((literal[sign] == '-' || literal[sign] == '+') && literal.length() > 1)
        sign++;
    if (literal[literal.length() - 1] == 'f')
        return 0;
    for(size_t i = sign; i < literal.length(); i++)
    {
        if(!std::isdigit(literal[i]) && literal[i] != '.')
            return 0;
        else if (literal[i] == '.' && i == literal.length() - 1)
            return 0;
        else if (literal[i] == '.' && i == 0)
            return 0;
        else if (literal[i] == '.' && i != literal.length() - 1)
            p++;
    }
    if (p > 1)
        return 0;
    else
        return 1;
}

int check_int(std::string literal)
{
    size_t sign = 0;
    if ((literal[sign] == '-' || literal[sign] == '+') && literal.length() > 1)
        sign++;
    for(size_t i = sign; i < literal.length(); i++)
    {
        if(!std::isdigit(literal[i]))
            return 0;
    }
    return 1;
}

int check_type(std::string literal)
{
    if (literal == "+inf" || literal == "-inf" || literal == "+inff" || literal == "-inff" || literal == "nan" || literal == "nanf")
        return 4;
    else if(check_int(literal))
        return 1;
    else if (check_float(literal))
        return 2;
    else if (check_double(literal))
        return 3;
    else if (literal.length() == 1)
        return 0;
    else 
        return -1;
}

size_t count_ap(std::string& literal)
{
    size_t pos = literal.find('.');
    if (pos == std::string::npos)
        return 0;
    size_t count = literal.find_first_not_of("0123456789", pos + 1);
    if (count == std::string::npos) 
        count = literal.length();
    return (count - pos - 1);
}

void print_int(double num, std::string literal)
{
    std::stringstream ss(literal);
    double i;
    ss >> i;

    if(i > INT_MAX || i < -INT_MAX)
    {
        std::cout << "int: " << "impossible" << std::endl;
        return ;
    }
    std::cout << "int: " << static_cast<int>(num) << std::endl;
}

void print_float(double num, std::string literal)
{
    std::stringstream ss(literal);
    double f;
    ss >> f;
    int count;

    if(f > FLT_MAX || f < -FLT_MAX)
    {
        std::cout << "float: " << "impossible" << std::endl;
        return ;
    }
    count = count_ap(literal);
    if (count == 0)
    {
        std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
        return ;
    }
    std::cout << std::fixed << std::setprecision(count);
    std::cout << "float: " << num << "f" << std::endl;
}

void print_char(char c, int i)
{
    if (i < -127 || i > 127)
    {
        std::cout << "char: impossible" << std::endl;
        return;
    }
    if (std::isprint(c))
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

void print_double(double num, std::string literal)
{
    std::stringstream ss(literal);
    long double f;
    ss >> f;
    int count;

    if(f > DBL_MAX || f < -DBL_MAX)
    {
        std::cout << f << "=" << DBL_MIN << std::endl;
        std::cout << "double: " << "impossible" << std::endl;
        return ;
    }
    count = count_ap(literal);
    if (count == 0)
    {
        std::cout << "double: " << num << ".0" << std::endl;
        return ;
    }
    std::cout << std::fixed << std::setprecision(count);
    std::cout << "double: " << num << std::endl;
}

void test_1(std::string literal)
{
    std::cout << "char  : Impossible" << std::endl;
    std::cout << "int   : Impossible" << std::endl;
    if (literal == "+inf" || literal == "-inf" || literal == "+inff" || literal == "-inff")
    {
        std::cout << "float    : " << literal[0] << "inff" << std::endl;
        std::cout << "double   : " << literal[0] << "inf" << std::endl;
    }
    else if (literal == "nan" || literal == "nanf")
    {
        std::cout << "float    : " << "nanf" << std::endl;
        std::cout << "double   : " << "nan" << std::endl;
    }

}

void ScalarConverter::convert(const std::string &literal)
{
    int type = check_type(literal);
    std::stringstream ss(literal);
    switch(type)
    {
        case 0: // char
        {
            std::cout << "<< char >>" << std::endl;
            char c = literal[0];
            print_char(c, 0);
            print_int(static_cast<double>(c), literal);
            print_float(static_cast<double>(c), literal);
            print_double(static_cast<double>(c), literal);
            break;
        }
        case 1: // int      
        {
            std::cout << "<< int >>" << std::endl;
            int i;
            ss >> i;        

            print_char(static_cast<char>(i), i);
            print_int(static_cast<double>(i), literal);
            print_float(static_cast<double>(i), literal);
            print_double(static_cast<double>(i), literal);
            break;
        }
        case 2: // float
        {
            float f;
            ss >> f;

            print_char(static_cast<char>(f), static_cast<int>(f));
            print_int(static_cast<double>(f), literal);
            print_float(static_cast<double>(f), literal);
            print_double(static_cast<double>(f), literal);
            break;
        }
        case 3: // double
        {
            std::cout << "<< double >>" << std::endl;
            double d;
            ss >> d;
            print_char(static_cast<char>(d), static_cast<int>(d));
            print_int(static_cast<double>(d), literal);
            print_float(d, literal);
            print_double(d, literal);
            break;
        }
        case 4:
        {
            test_1(literal);
            break;
        }
        default:
        {
            std::cout << "Invalid type" << std::endl;
            break;
        }
    }
}
