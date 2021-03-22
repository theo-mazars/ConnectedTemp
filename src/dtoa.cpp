#include "dtoa.h"

std::string dtoa(const double &number)
{
    std::ostringstream result;

    result << number;
    return result.str();
}
