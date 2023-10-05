#include "Road.h"

Road::Road(const City& city1, const City& city2, int distance)
    : city1(city1), city2(city2), distance(distance)
{
}

int Road::getDistance() const 
{
    return distance;
}

bool Road::connects(const City& city) const 
{
    return city.getName() == city1.getName() || city.getName() == city2.getName();
}

const City& Road::getOtherCity(const City& city) const
{
    if (city.getName() == city1.getName()) 
    {
        return city2;
    }
    else
    {
        return city1;
    }
}