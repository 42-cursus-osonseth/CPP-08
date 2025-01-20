#pragma once

#include <vector>
#include <algorithm>
#include <exception>
#include <iostream>
#include <cstdlib>
#include <climits>
#include <ctime>
#include <set>

#define RESET   "\033[0m"
#define RED     "\033[31m"

class Span
{
private:
    std::vector<int> v;
    unsigned int maxSize;
     Span();
public:
    Span(unsigned int maxSize);
    ~Span();
    void addNumber(int n);
    void printSpan() const;
    void longestSpan() const;
    void shortedSpan();
    class sizeLimit : public std::exception{
        const char *what() const throw();  
    };
    class cantFindDistance : public std::exception{
        const char *what() const throw();  
    };
};

