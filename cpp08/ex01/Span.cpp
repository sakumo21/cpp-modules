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

int  Span::shortestSpan()
{
    int shortest;
    if(v.size() > 1)
    {
        for (unsigned int i = 0; i < v.size(); i++)
        {
            for (unsigned int y = 0; y < v.size(); y++)
            {
                if (!shortest || (i >= y && (i - i) < shortest))
            }
        }
    }
    else
        throw(std::runtime_error("ERROR!"));
    return (shortest);
}

int Span::longestSpan()
{
    int shortest = 0;
    if(v.size() > 1)
    {
        for (unsigned int i = 0; i < v.size(); i++)
        {
            if (v[i] > shortest)
                shortest = v[i];
        }
    }
    else
        throw(std::runtime_error("ERROR!"));
    return (shortest);
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
