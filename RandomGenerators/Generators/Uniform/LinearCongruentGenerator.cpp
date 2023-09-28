#include "LinearCongruentGenerator.h"

LinearCongruentGenerator::LinearCongruentGenerator()
    : UniformGeneratorBase()
{
    m = 34572812;
}

LinearCongruentGenerator::LinearCongruentGenerator(int seed)
    : UniformGeneratorBase(seed)
{
    m = 34572812;
}

int LinearCongruentGenerator::Generate()
{
    const int a = 36, c = 2;
    x = (a * x + c) % m;
    return x;
}
