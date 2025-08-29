#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <limits>
#include <stdexcept>
#include <sstream>
#include <climits>


class PmergeME {
    private:
        std::vector<int> vec;
        std::deque<int> deq;
    public:
        PmergeME();
        PmergeME(char** argv);
        PmergeME(const PmergeME& other);
        PmergeME& operator=(const PmergeME& other);
        ~PmergeME();
        int toint(char *s);
        int checkerrror(std::string s);
        void sort();
        template <typename T>
        void splitContainer(T& container);
        template <typename T>
        void sortContainer(T &container, T &left, T &right);
};

#endif