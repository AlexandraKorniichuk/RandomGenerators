#include "UniformGeneratorBase.h"

UniformGeneratorBase::UniformGeneratorBase()
    : RandomGeneratorBase()
{
    Statistics = new GeneratorStatistics(Uniform);
}

UniformGeneratorBase::UniformGeneratorBase(int seed)
    : RandomGeneratorBase(seed)
{
    Statistics = new GeneratorStatistics(Uniform);
}

float UniformGeneratorBase::GenerateUn()
{
    return (float)Generate() / m;
}

float UniformGeneratorBase::CalculateUn() const
{
    return (float)x / m;
}
