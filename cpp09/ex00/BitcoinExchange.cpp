#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream file("data.csv");
    if (!file)
    {
        std::cerr << "Error opening file" << std::endl;
        return;
    }
    std::string line;
    std::getline(file, line); 
    while (std::getline(file, line))
    {
        std::string date = line.substr(0, line.find(','));
        std::string value = line.substr(line.find(',') + 1);
        // std::cout << "Date: " << date << ", Value: " << value << std::endl;
        exchangeRates[date] = value;
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
    exchangeRates = other.exchangeRates;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
    {
        exchangeRates = other.exchangeRates;
    }
    return *this;
}

int BitcoinExchange::exchange(const std::string& input)
{
    std::ifstream file(input.c_str());
    if (!file)
    {
        std::cerr << "Error opening file" << std::endl;
        return -1;
    }
    std::string line;
    std::getline(file, line);
    if (line != "date | value")
    {
        std::cerr << "Invalid input format" << std::endl;
        return -1;
    }
    while (std::getline(file, line))
    {
        if (line.empty() || line.find('|') == std::string::npos)
        {
            std::cerr << "Invalid line format" << std::endl;
            continue;
        }
        std::string date = line.substr(0, line.find('|') - 1);
        std::string value = line.substr(line.find('|') + 1);
        if (checkValue(value))
            continue;
        if (checkDate(date))
            continue;
        std::string prevDate = date;
        while (exchangeRates.count(prevDate) == 0)
        {
            std::string currentDate = prevDate;
            prevDate = getPrevDate(currentDate);

        }
        std::cout << date << " => " << value << " = " << countExchangeRate(exchangeRates[prevDate], value) << std::endl;
    }
    return 0;
}

int BitcoinExchange::checkValue(const std::string& value)
{
    if (value.find('-') != std::string::npos)
    {
        std::cout << "not a positive number!!" << std::endl;
        return 1; // Invalid value
    }
    std::stringstream ss(value);
    double val;
    ss >> val;
    if (ss.fail() || !ss.eof() || val < 0 || val > 1000)
    {
        std::cerr << "value between 0 and 1000!"  << std::endl;
        return 1; // Invalid value
    }
    return 0; // Valid value
}

std::string BitcoinExchange::getPrevDate(const std::string& date)
{
    int year, month, day;
    char dash;
    std::stringstream ss(date);
    ss >> year >> dash >> month >> dash >> day;
    struct tm timeinf = {};
    timeinf.tm_year = year - 1900;
    timeinf.tm_mon = month - 1;
    timeinf.tm_mday = day;
    time_t t = mktime(&timeinf);
    t -= 86400;
    struct tm* prevTime = localtime(&t);
    char buffer[11];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d", prevTime);
    return std::string(buffer);
}

int BitcoinExchange::checkDate(const std::string& date)
{
    double year = toDouble(date.substr(0, 4));
    double month = toDouble(date.substr(5, 2));
    double day = toDouble(date.substr(8, 2));
    if (!year || !month || !day || year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31)
    {
        std::cerr << "Invalid date" << std::endl;
        return 1; // Invalid date
    }
    return 0; // Valid date
}

double BitcoinExchange::toDouble(const std::string &str)
{
    std::stringstream ss(str);
    double value;

    ss >> value;
    if (ss.fail() || !ss.eof())
    {
        std::cerr << "Invalid number format" << std::endl;
        return 0.0;
    }
    return value;
}

float BitcoinExchange::countExchangeRate(const std::string& rate, const std::string& value)
{
    std::stringstream ss(value);
    std::stringstream ss2(rate);
    double rateValue, inputValue;
    ss >> inputValue;
    ss2 >> rateValue;
    return rateValue * inputValue;
}
BitcoinExchange::~BitcoinExchange()
{
}