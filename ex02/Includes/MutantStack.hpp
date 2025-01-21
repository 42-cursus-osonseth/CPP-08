#pragma once

#include <stack>
#include <cstddef>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack();
    ~MutantStack();

    typedef typename std::stack<T>::container_type::iterator it_type;

    it_type begin();

    class iterator
    {
    private:
        typename std::stack<T>::container_type::iterator it;

    public:
        iterator();
        ~iterator();
    };
};

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::iterator::iterator() : it() {}

template <typename T>
MutantStack<T>::iterator::~iterator() {}

template <typename T>
typename MutantStack<T>::it_type MutantStack<T>::begin()
{
    return this->c.begin();
}
