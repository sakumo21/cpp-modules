#include "Span.hpp"

void ft_iota(std::vector<int>::iterator begin, std::vector<int>::iterator end, int value)
{
    while(begin != end)
    {
        *begin = value;
        ++begin;
        ++value;
    }
}

int main()
{
    try
    {
        std::srand(std::time(0));
        std::vector<int> numbers(10000);
        std::generate(numbers.begin(), numbers.end(), std::rand);
        Span span(1000);
        span.addNumber(numbers.begin(), numbers.end());
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}