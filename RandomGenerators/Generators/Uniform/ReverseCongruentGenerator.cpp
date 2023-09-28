#include "ReverseCongruentGenerator.h"

ReverseCongruentGenerator::ReverseCongruentGenerator()
    : UniformGeneratorBase()
{
    m = 524288;
}

ReverseCongruentGenerator::ReverseCongruentGenerator(int seed)
    : UniformGeneratorBase(seed)
{
    m = 524288;
}

int ReverseCongruentGenerator::Generate()
{
    const int a = 64233, c = 54562;
    x = (a * (m - x % m) + c) % m;
    return x;
}
