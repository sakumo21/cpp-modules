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
    try{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(16);
        sp.addNumber(4);
        sp.addNumber(5);
        sp.addNumber(110);
        sp.printVector();
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        std::cout << "-----" << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try
    {
        std::srand(std::time(0));
        std::vector<int> numbers(99);
        std::generate(numbers.begin(), numbers.end(), std::rand);
        Span span(100);
        span.addNumber(numbers.begin(), numbers.end());
        span.addNumber(69);
        span.addNumber(67);
        span.printVector();
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}

