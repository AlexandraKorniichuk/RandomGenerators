#include "RatioGenerator.h"

RatioGenerator::RatioGenerator(int seed, UniformGeneratorBase* generator1,
    UniformGeneratorBase* generator2)
    : NormalGenerator(seed),
          Generator1(generator1),
          Generator2(generator2)
{
}

float RatioGenerator::GenerateNormal()
{
    for (int i = 0; i < 50; i++)
    {
        float v = Generator1->GenerateUn();
        float u = Generator2->GenerateUn();
        xf = sqrt(8 / exp(1))*(v - 0.5f) / u;
        if (xf * xf <= -4 * log(u))
        {
            return xf;
        }
    }
    return 0.5;
}
