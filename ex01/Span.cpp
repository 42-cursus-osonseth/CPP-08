#include "Span.hpp"

Span::Span() {}
Span::Span(unsigned int maxSize) : maxSize(maxSize) {}
Span::~Span() {}
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
        std::cout << RED << e.what() << RESET << std::endl;
    }
}
void Span::longestSpan() const
{
    try
    {
        if (v.size() < 2)
            throw Span::cantFindDistance();
        std::vector<int>::const_iterator min = std::min_element(v.begin(), v.end());
        std::vector<int>::const_iterator max = std::max_element(v.begin(), v.end());
        std::cout << "longest distance is between : " << *min << " and " << *max << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }
}
void Span::shortedSpan()
{
    try
    {
        if (v.size() < 2)
            throw Span::cantFindDistance();
        std::sort(v.begin(), v.end());
        std::vector<int>::iterator a;
        std::vector<int>::iterator b;
        int distance = INT_MAX;
        for (std::vector<int>::iterator it = v.begin(); it != v.end() - 1; ++it)
        {
            if (abs(*(it + 1)) - abs(*it) < distance)
            {
                distance = abs(*(it + 1) - *it);
                a = it;
                b = (it + 1);
            }
        }
        std::cout << "shorted distance is between : " << *a << " and " << *b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }
}
void Span::printSpan() const
{
    for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
        std::cout << *it << std::endl;
}