#include "PolarCoordinatesGenerator.h"

PolarCoordinatesGenerator::PolarCoordinatesGenerator(int seed, UniformGeneratorBase* generator1,
    UniformGeneratorBase* generator2)
    : NormalGenerator(seed),
          Generator1(generator1),
          Generator2(generator2)
{
}

float PolarCoordinatesGenerator::GenerateNormal()
{
    float v1 = 2 * Generator1->GenerateUn() - 1;
    float v2 = 2 * Generator2->GenerateUn() - 1;
    float s = v1 * v1 + v2 * v2;
    s = s >= 1 ? s - 1 : s;
    xf = v1 * sqrt(-2 * log(s) / s);
    return xf;
}
