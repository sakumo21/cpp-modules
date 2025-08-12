#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iterator>
#include <stack>

template <typename T, typename Container = std::deque<T> > class MutantStack : public std::stack<T, Container>
{
    private:
    
    public:
        MutantStack();
        MutantStack(const MutantStack& other);
        MutantStack& operator=(const MutantStack& other);
        ~MutantStack();
        typedef typename Container::iterator iterator;

        iterator begin();
        iterator end();
};

#include "MutantStack.tpp"

#endif