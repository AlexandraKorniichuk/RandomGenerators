#pragma once
#include "Statistics/GeneratorStatistics.h"

class RandomGeneratorBase
{
public:
    virtual ~RandomGeneratorBase() = default;
    RandomGeneratorBase();
    explicit RandomGeneratorBase(int seed);
    
    GeneratorStatistics* Statistics;
    StatisticsType Type = Uniform;

    int x = 1;
    virtual int Generate();
};
