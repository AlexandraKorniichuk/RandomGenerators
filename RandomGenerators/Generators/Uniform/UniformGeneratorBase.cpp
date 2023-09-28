#include "UniformGeneratorBase.h"

UniformGeneratorBase::UniformGeneratorBase()
    : RandomGeneratorBase()
{
}

UniformGeneratorBase::UniformGeneratorBase(int seed)
    : RandomGeneratorBase(seed)
{
}

float UniformGeneratorBase::CalculateUn() const
{
    return (float)x / m;
}
