#include "RandomGenerator.h"


RandomGenerator::RandomGenerator()
{
    ChangeStatistic(Normal);
}

void RandomGenerator::ChangeStatistic(StatisticsType type)
{
    Statistics = new GeneratorStatistics(type);
}


