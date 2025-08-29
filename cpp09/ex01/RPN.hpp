#pragma once

#include <stack>
#include <string>
#include <sstream>
#include <iostream>

class RPN {
    private:
        std::stack<int> _stack;
        public:
        RPN();
        ~RPN();
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);
        void evaluate(std::string &exp);
        int toint(const std::string &str);
        int isdigit(std::string token);
};