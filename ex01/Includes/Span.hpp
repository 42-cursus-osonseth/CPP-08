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
    Span(Span const &other);
    Span &operator=(Span const &other);
    void addNumber(int n);
    void addNumber(unsigned int count, int min, int max);
    void addNumber (std::vector<int>::iterator start, std::vector<int>::iterator end);
    void printSpan() const;
    long int longestSpan() const;
    long int shortedSpan();
    class sizeLimit : public std::exception{
        const char *what() const throw();  
    };
    class cantFindDistance : public std::exception{
        const char *what() const throw();  
    };
    class emptySpan : public std::exception{
        const char *what() const throw();  
    };
};

