#pragma once
#include "NormalGenerator.h"
#include <cmath>
#include "../Uniform/UniformGeneratorBase.h"

class RatioGenerator : public NormalGenerator
{
public:
    RatioGenerator(int seed, UniformGeneratorBase* generator1,
                              UniformGeneratorBase* generator2);

    float GenerateNormal() override;

    UniformGeneratorBase* Generator1;
    UniformGeneratorBase* Generator2;
};
