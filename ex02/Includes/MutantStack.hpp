#pragma once

#include <stack>
#include <cstddef>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack();
    ~MutantStack();
    MutantStack(MutantStack const &other);
    MutantStack &operator=(MutantStack<T> const &other);
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    iterator begin()
    {
        return this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }
    const_iterator begin() const
    {
        return this->c.begin();
    }
    reverse_iterator rbegin()
    {
        return this->c.rbegin();
    }
    reverse_iterator rend()
    {
        return this->c.rend();
    }
    const_reverse_iterator rbegin() const
    {
        return this->c.rbegin();
    }
    const_reverse_iterator rend() const
    {
        return this->c.rend();
    }
};

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::~MutantStack() {}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<T>(other) {}
template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
    if (this != &other)
        std::stack<T>::operator=(other);
    return *this;
}
