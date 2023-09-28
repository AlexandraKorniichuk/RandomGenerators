#pragma once
#include "UniformGeneratorBase.h"

class QuadraticCongruentGenerator : public  UniformGeneratorBase
{
public:
    QuadraticCongruentGenerator();
    explicit QuadraticCongruentGenerator(int seed);
    
    int Generate() override;
};
