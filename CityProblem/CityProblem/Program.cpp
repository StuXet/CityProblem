#include "Program.h"
#include <iostream>

void Program::run()
{
    //Add city to the solver
    tspSolver.addCity("A");
    tspSolver.addCity("B");
    tspSolver.addCity("C");
    tspSolver.addCity("D");
    tspSolver.addCity("E");

    //Add road between cities with distance
    tspSolver.addRoad("A", "B", 2);
    tspSolver.addRoad("A", "C", 2);
    tspSolver.addRoad("B", "C", 3);
    tspSolver.addRoad("B", "D", 3);
    tspSolver.addRoad("B", "E", 1);
    tspSolver.addRoad("C", "E", 3);
    tspSolver.addRoad("C", "D", 1);
    tspSolver.addRoad("D", "E", 3);

    int result = tspSolver.solveTSP();
    cout << "Minimum distance: " << result << endl;

    system("pause");
}