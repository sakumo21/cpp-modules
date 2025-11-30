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
        throw(std::runtime_error("ERROR!"));
    }
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    std::vector<int>::iterator it;
    size_t distance = std::distance(begin, end);
    if(distance <= _size - v.size())
    {
        for(it = begin; it != end && v.size() < _size; *it++)
        {
            v.push_back(*it);
        }
    }
    else
        throw(std::runtime_error("ERROR!"));
}

int  Span::shortestSpan()
{
    int shortest;
    std::sort(v.begin(), v.end());
    if(v.size() > 1)
    {
        std::vector<int>::iterator i = v.begin();
        shortest = *(i + 1) - *i;
        for (std::vector<int>::iterator y = i + 1; y + 1 != v.end(); y++)
        {
            if (*(y + 1) - *y < shortest)
                shortest = *(y + 1) - *y;
        }
    }
    else
        throw(std::runtime_error("ERROR!"));
    return (shortest);
}

int Span::longestSpan()
{
    int longest = 0;
    std::sort(v.begin(), v.end());
    if(v.size() > 1)
        longest = v[v.size() - 1] - v[0];
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

void Span::printVector()
{
    std::sort(v.begin(), v.end());
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}

Span::~Span()
{
}
