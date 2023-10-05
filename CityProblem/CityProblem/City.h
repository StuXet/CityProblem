#pragma once
#include <string>
using namespace std;

class City 
{
public:
    //Constructor: Initializes a city with a given name.
    City(const string& name);
    //Getter for the city's name.
    string getName() const;
    //Overloads the '<' operator to compare two cities.
    friend bool operator<(const City& lhs, const City& rhs);

private:
    string name; //City name
};