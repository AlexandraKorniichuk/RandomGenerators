#pragma once
#include "UniformGeneratorBase.h"

class ReverseCongruentGenerator : public UniformGeneratorBase
{
public:
    ReverseCongruentGenerator();
    explicit ReverseCongruentGenerator(int seed);

    int Generate() override;
};
