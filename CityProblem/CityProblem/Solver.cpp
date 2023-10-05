#include "Solver.h"
#include <algorithm>

Solver::Solver()
{
}

void Solver::addCity(const string& name)
{
	cities.push_back(City(name));
}

void Solver::addRoad(const string& city1Name, const string& city2Name, int distance)
{
	City* city1 = nullptr;
	City* city2 = nullptr;
	for (auto& city : cities)
	{
		if (city.getName() == city1Name) city1 = &city;
		if (city.getName() == city2Name) city2 = &city;
	}
	roads.push_back(Road(*city1, *city2, distance));
}

// Solves the Traveling Salesman Problem and returns the shortest distance.
//Iterates over all permutations of the cities to find the shortest possible route.
int Solver::solveTSP()
{
	vector<City> route = cities;
	int minDistance = INT_MAX;
	//Iterate over all possible city permutation
	do
	{
		int distance = calculateRouteDistance(route);
		if (distance < minDistance)
		{
			minDistance = distance;
		}
	} while (next_permutation(route.begin(), route.end()));
	return minDistance;
}

// Calculates the total distance of a given route.
int Solver::calculateRouteDistance(const vector<City>& route)
{
	int totalDistance = 0;
	// Iterate over the cities in the route (except the last one).
	for (size_t i = 0; i < route.size() - 1; i++)
	{
		//Finds route between current and next cities
		const Road* road = findRoad(route[i], route[i + 1]);
		if (!road) return INT_MAX;
		totalDistance += road->getDistance();
	}
	const Road* returnRoad = findRoad(route.back(), route.front());
	if (!returnRoad) return INT_MAX;
	totalDistance += returnRoad->getDistance();
	return totalDistance;
}

// Finds the road between two given cities, if it exists.
const Road* Solver::findRoad(const City& city1, const City& city2) const
{
	for (const auto& road : roads)
	{
		if (road.connects(city1) && road.connects(city2))
		{
			return &road;
		}
	}
	return nullptr;
}