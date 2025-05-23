#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    private:
    std::vector<int> v;
    unsigned int _size;
    public:
    Span(unsigned int size);
    Span();
    void addNumber(int i);
    int shortestSpan();
    int longestSpan();
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();
};

#endif