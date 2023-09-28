#pragma once
#include "UniformGeneratorBase.h"

class LinearCongruentGenerator : public UniformGeneratorBase
{
public:
    LinearCongruentGenerator();
    explicit LinearCongruentGenerator(int seed);
    
    int Generate() override;
};
