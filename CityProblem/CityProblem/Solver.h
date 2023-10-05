#pragma once
#include "City.h"
#include "Road.h"
#include <vector>
using namespace std;

class Solver
{
public:
    //Default constructor
    Solver();
    //Adds city with given name
    void addCity(const string& name);
    //Adds road between two cities with given distance
    void addRoad(const string& city1Name, const string& city2Name, int distance);
    //Method to solve the minimum distance
    int solveTSP();

private:
    //Lists of cities and roads
    vector<City> cities;
    vector<Road> roads;
    
    int calculateRouteDistance(const vector<City>& route);
    const Road* findRoad(const City& city1, const City& city2) const;
};