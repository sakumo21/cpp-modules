#include "PmergeME.hpp"

PmergeME::PmergeME()
{
    int arr[] = {5,3,8,1,4,7,9,2,6,0};
    vec = std::vector<int>(arr, arr + 10);
    deq = std::deque<int>(arr, arr + 10);
}

PmergeME::PmergeME(char** argv)
{
    for (int i = 1; argv[i]; i++) 
    {
        if (checkerrror(argv[i]))
            throw std::runtime_error("Error");
        vec.push_back(toint(argv[i]));
        deq.push_back(toint(argv[i]));
    }
}

PmergeME::PmergeME(const PmergeME& other)
{
    vec = other.vec;
    deq = other.deq;
}

PmergeME& PmergeME::operator=(const PmergeME& other)
{
    vec = other.vec;
    deq = other.deq;
    return *this;
}

int PmergeME::toint(char *s)
{
    std::stringstream ss(s);
    int num;
    ss >> num;
    if (ss.fail() || !ss.eof())
        throw std::runtime_error("Invalid integer: " + std::string(s));
    return num;
}

int PmergeME::checkerrror(std::string s)
{
    std::stringstream ss(s);
    double num;
    ss >> num;
    if (s.find_first_not_of("0123456789") != std::string::npos)
        return 1;
    if (ss.fail() || !ss.eof())
        return 1;
    if (num < 0 || num > INT_MAX)
        return 1;
    return 0;
}

template <typename T>
void PmergeME::sortContainer(T &container, T &left, T &right)
{
    size_t i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size())
    {
        if (left[i] < right[j])
            container[k++] = left[i++];
        else
            container[k++] = right[j++];
    }
    while (i < left.size())
        container[k++] = left[i++];
    while (j < right.size())
        container[k++] = right[j++];
}

template <typename T>
void PmergeME::splitContainer(T& container)
{
    if (container.size() <= 1)
        return;
    int mid = container.size() / 2;
    T left(container.begin(), container.begin() + mid);
    T right(container.begin() + mid, container.end());
    splitContainer(left);
    splitContainer(right);
    sortContainer(container, left, right);
}

void PmergeME::sort()
{
    clock_t start, end;
    std::cout << "Before: ";
    for (size_t i = 0; i < vec.size(); i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;
    start = clock();
    splitContainer(vec);
    end = clock();
    std::cout << "After: ";
    for (size_t i = 0; i < vec.size(); i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;
    double vec_time = double(end - start) / CLOCKS_PER_SEC * 1000;
    start = clock();
    splitContainer(deq);
    end = clock();
    double deq_time = double(end - start) / CLOCKS_PER_SEC * 100;
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << vec_time << " ms" << std::endl;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << deq_time << " ms" << std::endl;
}

PmergeME::~PmergeME()
{

}