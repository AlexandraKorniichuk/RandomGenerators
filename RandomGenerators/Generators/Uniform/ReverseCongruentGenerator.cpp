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
    x = (a * FindModuloReverse() + c) % m;
    return x;
}

int ReverseCongruentGenerator::FindModuloReverse()
{
    int a = 1;
    while ((a * x) % m != 1)
    {
        a++;
    }
    return a;
}
