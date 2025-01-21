#pragma once

#include <stack>
#include <cstddef>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack();
    ~MutantStack();

    typename MutantStack<T>::iterator begin();
    typename MutantStack<T>::iterator end();

    class iterator
    {
    private:
        typename std::stack<T>::container_type::iterator it;

    public:
        iterator();
        ~iterator();
        iterator(typename std::stack<T>::container_type::iterator it);
        T &operator*();
        iterator &operator--();
        iterator &operator++();
        iterator &operator--(int);
        iterator &operator++(int);
        bool operator!=(const iterator &other) const;
    };
};

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::iterator::iterator() : it() {}

template <typename T>
MutantStack<T>::iterator::iterator(typename std::stack<T>::container_type::iterator it) : it(it) {}

template <typename T>
MutantStack<T>::iterator::~iterator() {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return iterator(this->c.begin());
}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return iterator(this->c.end());
}
template <typename T>
T &MutantStack<T>::iterator::operator*()
{
    return *it;
}
template <typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator--()
{
    --it;
    return *this;
}
template <typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator++()
{
    ++it;
    return *this;
}
template <typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator--(int)
{
    iterator tmp = *this;
    --it;
    return *tmp;
}
template <typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator++(int)
{
    iterator tmp = *this;
    ++it;
    return *tmp;
}
template <typename T>
bool MutantStack<T>::iterator::operator!=(const iterator &other) const
{
    return it != other.it;
}
