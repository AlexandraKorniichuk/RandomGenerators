#include "RandomGeneratorBase.h"

RandomGeneratorBase::RandomGeneratorBase()
{
    Statistics = new GeneratorStatistics(Type);
}

RandomGeneratorBase::RandomGeneratorBase(int seed)
{
    x = seed < 0 ? -1 * seed : seed % 10;
    if (seed == 0)
    {
        x = 1;
    }
    Statistics = new GeneratorStatistics(Type);
}

int RandomGeneratorBase::Generate()
{
    return 0;
}
