#pragma once
#include "UniformGeneratorBase.h"

class FibonacciGenerator : public UniformGeneratorBase
{
public:
    FibonacciGenerator();
    explicit FibonacciGenerator(int seed);

    int xn = 987;
    int xPrevious = 610;
    
    int Generate() override;
};
