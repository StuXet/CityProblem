#pragma once
#include "City.h"

class Road 
{
public:
    //Constructor: Initializes a road with two cities and a distance.
    Road(const City& city1, const City& city2, int distance);    //Getter for the distance of the road.
    int getDistance() const;  // Getter for the road's distance.
    //Checks if the road connects the given city.
    bool connects(const City& city) const;
    //Returns the other city that this road connects to, given one of the cities.
    const City& getOtherCity(const City& city) const;

private:
    const City& city1;
    const City& city2;
    int distance;
};