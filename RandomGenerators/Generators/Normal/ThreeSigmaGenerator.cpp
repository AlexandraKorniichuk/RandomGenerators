#include "ThreeSigmaGenerator.h"

ThreeSigmaGenerator::ThreeSigmaGenerator(int seed, UniformGeneratorBase* generator)
    : NormalGenerator(seed)
{
    Generator = generator;
    Statistics = new GeneratorStatistics(Normal);
}

float ThreeSigmaGenerator::GenerateNormal()
{
    float sum = 0;
    for(int i = 0; i < 12; i++)
    {
        sum += Generator->GenerateUn();
    }
    sum -= 6;
    xf = sum;
    return xf;
}
