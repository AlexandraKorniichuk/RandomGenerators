#include "LinearCongruentGenerator.h"

LinearCongruentGenerator::LinearCongruentGenerator()
    : UniformGeneratorBase()
{
}

LinearCongruentGenerator::LinearCongruentGenerator(int seed)
    : UniformGeneratorBase(seed)
{
}

int LinearCongruentGenerator::Generate()
{
    const int a = 110351245, c = 12345;
    x = (a * x + c) % m;
    return x;
}
