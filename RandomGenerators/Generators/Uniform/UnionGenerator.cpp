#include "UnionGenerator.h"

UnionGenerator::UnionGenerator(int seed, UniformGeneratorBase* generator1,
    UniformGeneratorBase* generator2)
    : UniformGeneratorBase(seed), Generator1(generator1), Generator2(generator2)
{
    m = 162323;
}

int UnionGenerator::Generate()
{
    x = abs(Generator1->Generate() - Generator2->Generate()) % m;
    return x;
}
