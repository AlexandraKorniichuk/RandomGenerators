#pragma once
#include "../../RandomGeneratorBase.h"

class UniformGeneratorBase : public RandomGeneratorBase
{
public:
    UniformGeneratorBase();
    explicit UniformGeneratorBase(int seed);

    int m = 2147483647;
    
    float CalculateUn() const;
};
