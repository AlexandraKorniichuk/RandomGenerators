#pragma once
#include "../../RandomGeneratorBase.h"

class NormalGenerator : public RandomGeneratorBase
{
public:
    NormalGenerator();
    explicit NormalGenerator(int seed);

    float xf;

    virtual float GenerateNormal();
};
