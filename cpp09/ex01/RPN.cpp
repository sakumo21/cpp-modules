#include "RPN.hpp"

RPN::RPN()
{}

RPN::RPN(const RPN& other)
{
    _stack = other._stack;
}

RPN& RPN::operator=(const RPN& other)
{
    if (this != &other)
    {
        _stack = other._stack;
    }
    return *this;
}

int RPN::toint(const std::string &str)
{
    std::istringstream iss(str);
    int value;
    iss >> value;
    return value;
}

int RPN::isdigit(std::string token)
{
    if (token.size() == 1 && token[0] >= '0' && token[0] <= '9')
        return 1;
    return 0;
}

void RPN::evaluate(std::string &exp)
{
    std::istringstream iss(exp);
    std::string token;
    int first, sec;
    while (iss >> token)
    {
        if (isdigit(token))
            _stack.push(toint(token));
        else if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if(!_stack.empty())
            {
                first = _stack.top();
                _stack.pop();
            }
            else
                first = 0;
            if (!_stack.empty())
            {
                sec = _stack.top();
                _stack.pop();
            }
            else
                sec = 0;
            if (token.size() == 1)
            {
                switch (token[0])
                {
                case '+':
                    _stack.push(first + sec);
                    break;
                case '-':
                    _stack.push(sec - first);
                    break;
                case '*':
                    _stack.push(first * sec);
                    break;
                case '/':
                    _stack.push(sec / first);
                    break;
                default:
                    break;
                }
            }
        }
        else
        {
            std::cerr << "Error: Invalid token '" << token << "'" << std::endl;
            return;
        }
    }
    if (!_stack.empty())
        std::cout << _stack.top() << std::endl;
}
RPN::~RPN()
{
}