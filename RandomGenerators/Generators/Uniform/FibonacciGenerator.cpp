#include "FibonacciGenerator.h"

FibonacciGenerator::FibonacciGenerator()
    : UniformGeneratorBase()
{
    xPrevious = x;
    xn = xPrevious + 10;  
    m = 54435;
}

FibonacciGenerator::FibonacciGenerator(int seed)
    : UniformGeneratorBase(seed)
{
    xPrevious = seed;
    xn = xPrevious + 10;      
    m = 54435;
}

int FibonacciGenerator::Generate()
{
    x = (xn + xPrevious) % m;
    xn += xPrevious;
    xPrevious = xn - xPrevious;
    return x;
}
