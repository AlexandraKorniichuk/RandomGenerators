#pragma once
#include "NormalGenerator.h"
#include "../Uniform/UniformGeneratorBase.h"

class ThreeSigmaGenerator : public NormalGenerator
{
public:
    explicit ThreeSigmaGenerator(int seed, UniformGeneratorBase* generator);

    UniformGeneratorBase* Generator;
    
    float GenerateNormal() override;
};
