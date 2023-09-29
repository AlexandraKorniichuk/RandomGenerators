#pragma once
#include "../Normal/NormalGenerator.h"
#include "../Uniform/UniformGeneratorBase.h"
#include <cmath>

class ArensaGenerator : public NormalGenerator
{
public:
    ArensaGenerator(int seed, UniformGeneratorBase* generator);

    float GenerateNormal() override;

    UniformGeneratorBase* Generator;
};
