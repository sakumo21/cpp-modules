#pragma once

#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <ctime>


class BitcoinExchange 
{
    private:
        std::map<std::string, std::string> exchangeRates;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        int exchange(const std::string& input);
        float countExchangeRate(const std::string& rate, const std::string& value);
        int checkValue(const std::string& value);
        int checkDate(const std::string& date);
        double toDouble(const std::string &str);
        std::string getPrevDate(const std::string& date);
        ~BitcoinExchange();
};