#include "Span.hpp"

int main()
{

    {
        Span a(5);

        a.addNumber(5, -10000, 10000);

        Span b = a;
        Span c(3);
        c.addNumber(3, -10, 10);
        c.printSpan();
        b = a = c;
        b.printSpan();
    }
    {
        Span span(2);
        span.addNumber(-2000000000);
        span.addNumber(2000000000);
        std::cout << span.longestSpan() << std::endl;
        std::cout << span.shortedSpan() << std::endl;
    }
    {
        Span span(50000);
        span.addNumber(50000, 0, 100000);
        std::cout << span.longestSpan() << std::endl;
        std::cout << span.shortedSpan() << std::endl;

    }
    {
        Span a(10);
        a.addNumber(5, 0, 500);
        std::vector<int> v(5); 
        for (int i = 0; i < 5; ++i)
        {
            v[i] = i * 10; 
        }
        a.addNumber(v.begin(), v.end());
        a.printSpan();

    }

    return 0;
}