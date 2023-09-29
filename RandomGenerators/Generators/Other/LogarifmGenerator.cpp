#include "LogarifmGenerator.h"

LogarifmGenerator::LogarifmGenerator(int seed, UniformGeneratorBase* generator)
    : NormalGenerator(seed), Generator(generator)
{
    Statistics = new GeneratorStatistics(Other);
}

float LogarifmGenerator::GenerateNormal()
{
    const float nu = 56;
    float u = Generator->GenerateUn();
    xf = -nu*log(u);
    return xf;
}
