#include "Span.hpp"

int main()
{
    {
        Span span(2);
        span.addNumber(-2000000000);
        span.addNumber(2000000000);
        std::cout << span.longestSpan() << std::endl;
        std::cout << span.shortedSpan() << std::endl;
    }
    {
        Span span(50000);
        srand(time(0));
        for (int i = 0; i < 50000; ++i)
        {
            int randomValue = rand() % 10000001 - 5000000;
            span.addNumber(randomValue);
        }
        std::cout << span.longestSpan() << std::endl;
        std::cout << span.shortedSpan() << std::endl;

    }

    {
        Span span(50000);

        srand(time(0));

        std::set<int> uniqueNumbers;

        while (uniqueNumbers.size() < 50000)
        {
            int randomValue = rand() % 10000001 - 5000000;
            uniqueNumbers.insert(randomValue);
        }
        for (std::set<int>::iterator it = uniqueNumbers.begin(); it != uniqueNumbers.end(); ++it)
        {
            span.addNumber(*it);
        }
        std::cout << span.longestSpan() << std::endl;
        std::cout << span.shortedSpan() << std::endl;

    }
    return 0;
}