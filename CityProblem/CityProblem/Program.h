#pragma once
#include "Solver.h"

class Program 
{
public:
    void run();

private:
    Solver tspSolver;
};

//Class to behave like main to just keep main simple and clean
//as my c++ teacher teach me in Tiltan