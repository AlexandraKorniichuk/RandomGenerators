#pragma once
#include "../Normal/NormalGenerator.h"
#include "../Uniform/UniformGeneratorBase.h"
#include <cmath>

class LogarifmGenerator : public NormalGenerator
{
public:
    LogarifmGenerator(int seed, UniformGeneratorBase* generator);

    float GenerateNormal() override;

    UniformGeneratorBase* Generator;
};
