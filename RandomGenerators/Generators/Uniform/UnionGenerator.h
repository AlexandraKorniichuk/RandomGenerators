#pragma once
#include "UniformGeneratorBase.h"

class UnionGenerator : public UniformGeneratorBase
{
public:
    explicit UnionGenerator(int seed, UniformGeneratorBase* generator1,
        UniformGeneratorBase* generator2);

    UniformGeneratorBase* Generator1;
    UniformGeneratorBase* Generator2;
    
    int Generate() override;
};
