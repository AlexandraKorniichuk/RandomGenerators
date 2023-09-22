#pragma once
#include "Statistics/GeneratorStatistics.h"

class RandomGenerator
{
public:
    RandomGenerator();
    
    void ChangeStatistic(StatisticsType type);
    GeneratorStatistics* Statistics;
    
};
