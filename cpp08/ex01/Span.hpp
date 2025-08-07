#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

class Span
{
    private:
    std::vector<int> v;
    unsigned int _size;
    public:
    Span(unsigned int size);
    Span();
    void addNumber(int i);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();
};

#endif