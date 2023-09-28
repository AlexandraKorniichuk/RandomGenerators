#include "QuadraticCongruentGenerator.h"

QuadraticCongruentGenerator::QuadraticCongruentGenerator()
    : UniformGeneratorBase()
{
    m = 19997;
}

QuadraticCongruentGenerator::QuadraticCongruentGenerator(int seed)
    : UniformGeneratorBase(seed)
{
    m = 19997;
}

int QuadraticCongruentGenerator::Generate()
{
    const int a = 3, b = 5, c = 11;
    x = (a * x * x + b * x + c) % m;
    return x;
}
