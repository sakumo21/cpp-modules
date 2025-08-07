#include "Span.hpp"

Span::Span(unsigned int size): _size(size)
{
}

Span::Span()
{
    _size = 0;
}

void Span::addNumber(int i)
{
    if (v.size() < _size)
    {
        v.push_back(i);
    }
    else
    {
        throw(std::runtime_error("Value not found"));
    }
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    std::vector<int>::iterator it;

    for(it = begin; it != end; *it++)
    {
        v.push_back(*it);
    }
        
}

int  Span::shortestSpan()
{
    int shortest;
    if(v.size() > 1)
    {
        std::vector<int>::iterator i = v.begin();
        for (std::vector<int>::iterator y = i + 1; y != v.end(); y++)
            if (!shortest || std::abs(*i - *y) < shortest)
                shortest = std::abs(*i - *y);
    }
    else
        throw(std::runtime_error("ERROR!"));
    return (shortest);
}

int Span::longestSpan()
{
    int longest = 0;
    if(v.size() > 1)
    {
        std::vector<int>::iterator i = v.begin();
        for (std::vector<int>::iterator y = i + 1; y != v.end(); y++)
            if (!longest || std::abs(*i - *y) > longest)
                longest = std::abs(*i - *y);
    }
    else
        throw(std::runtime_error("ERROR!"));
    return (longest);
}


Span::Span(const Span& other)
{
	*this = other;
}

Span& Span::operator=(const Span& other)
{
	this->_size = other._size;
    this->v = other.v;
    return *this;
}

Span::~Span()
{
}
