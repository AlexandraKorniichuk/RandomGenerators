#include "FibonacciGenerator.h"

FibonacciGenerator::FibonacciGenerator()
    : UniformGeneratorBase()
{
    m = 1000007;
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
    xPrevious = xn;
    xn += xPrevious;
    return x;
}
