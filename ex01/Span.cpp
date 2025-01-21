#include "Span.hpp"

Span::Span() {}
Span::Span(unsigned int maxSize) : maxSize(maxSize) {}
Span::~Span() {}
Span::Span(Span const &other) : v(other.v), maxSize(other.maxSize)
{
}
Span &Span::operator=(Span const &other)
{
    if (this != &other)
    {
        maxSize = other.maxSize;
        v = other.v;
    }
    return *this;
}
void Span::addNumber(int n)
{
    try
    {
        if (v.size() == maxSize)
            throw Span::sizeLimit();
        v.push_back(n);
    }
    catch (std::exception &e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
}
void Span::addNumber(unsigned int count, int min, int max)
{
    try
    {
        if (count > maxSize - v.size())
            throw Span::sizeLimit();
        srand(time(0));
        for (unsigned int i = 0; i < count; ++i)
            v.push_back(rand() % (max - min + 1) + min);
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
}

long int Span::longestSpan() const
{
    try
    {
        if (v.size() < 2)
            throw Span::cantFindDistance();
        std::vector<int>::const_iterator min = std::min_element(v.begin(), v.end());
        std::vector<int>::const_iterator max = std::max_element(v.begin(), v.end());
        long int n = std::labs(static_cast<long int>(*max) - static_cast<long int>(*min));
        return n;
    }
    catch (std::exception &e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    return 0;
}
long int Span::shortedSpan()
{
    try
    {
        if (v.size() < 2)
            throw Span::cantFindDistance();
        std::sort(v.begin(), v.end());
        long int distance = LONG_MAX;
        for (std::vector<int>::iterator it = v.begin(); it != v.end() - 1; ++it)
        {
            if (labs(static_cast<long int>(*(it + 1)) - static_cast<long int>(*it)) < distance)
            {
                distance = labs(static_cast<long int>(*(it + 1)) - static_cast<long int>(*it));
            }
        }
        return distance;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    return 0;
}
void Span::printSpan() const
{
    try
    {
        if (v.size() == 0)
            throw Span::emptySpan();
        for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
            std::cout << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
}