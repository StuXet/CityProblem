#include <iostream>
#include "Program.h"
/*
minimal number to go to each city
         A
        / \
       B - C
       | X |
       D - E

       X = 1
       / \ = 2
       - | = 3

       A -> C/B = 2
       B -> E = 1
       B -> C/D = 3
       C -> B/E = 3
       C -> D = 1
       D -> B/E = 3
       D -> C = 1
       E -> C/D = 3
       E -> B = 1

       road with pointer to city or pointer from city to road
       Start point D
       minimal should be 6 km
*/


int main()
{
}