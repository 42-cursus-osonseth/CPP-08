#include "Span.hpp"
const char *Span::sizeLimit::what() const throw()
{
    return ("The span is full, can't add another element");
}
const char *Span::cantFindDistance::what() const throw()
{
    return ("The span contains less than 2 elements, can't find distance");
}