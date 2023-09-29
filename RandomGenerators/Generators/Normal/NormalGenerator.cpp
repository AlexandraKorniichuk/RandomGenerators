#include "NormalGenerator.h"

NormalGenerator::NormalGenerator()
{
    xf = x;
    Statistics = new GeneratorStatistics(Normal);
}

NormalGenerator::NormalGenerator(int seed)
    : RandomGeneratorBase(seed)
{
    xf = x;
    Statistics = new GeneratorStatistics(Normal);
}

float NormalGenerator::GenerateNormal()
{
    return xf;
}
