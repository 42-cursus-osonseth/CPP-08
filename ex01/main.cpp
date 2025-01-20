#include "Span.hpp"

int main()
{
    {
        Span span(50000);
        srand(time(0));
        for (int i = 0; i < 50000; ++i)
        {
            int randomValue = rand() % 10000001 - 5000000;
            span.addNumber(randomValue);
        }
        span.longestSpan();
        span.shortedSpan();
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
        span.longestSpan();
        span.shortedSpan();

      
    }
    return 0;
}