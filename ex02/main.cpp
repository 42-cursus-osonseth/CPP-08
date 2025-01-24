#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(22);
    mstack.push(69);
    for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
        std::cout << *rit << std::endl;
}
// int main()
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     mstack.push(22);
//     mstack.push(69);
//     MutantStack<int>::const_iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     --ite;
//     std::cout << *it << "     " << *ite << std::endl;
//     return 0;
// }
// int main()
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);
//     std::cout << s.size() << std::endl;
//     return 0;
// }
// int main()
// {
// std::list<int> mstack;
// mstack.push_back(5);
// mstack.push_back(17);
// std::cout << mstack.front() << std::endl;
// mstack.pop_back();
// std::cout << mstack.size() << std::endl;
// mstack.push_back(3);
// mstack.push_back(5);
// mstack.push_back(737);
// mstack.push_back(888);

// mstack.push_back(0);
// std::list<int>::iterator it = mstack.begin();
// std::list<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }

// return 0;
// }