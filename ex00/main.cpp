#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> vec;
    vec.push_back(5);
    vec.push_back(16);
    vec.push_back(43);
    vec.push_back(56);
    vec.push_back(43);

    for (std::vector<int>::iterator it = ::easyfind(vec, 2); it != vec.end(); ++it)
        std::cout << *it << std::endl;
    return 0;
}