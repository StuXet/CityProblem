#include "City.h"

City::City(const string& name) : name(name) 
{
}

string City::getName() const
{
    return name;
}

bool operator<(const City& lhs, const City& rhs) 
{
    return lhs.getName() < rhs.getName();
}