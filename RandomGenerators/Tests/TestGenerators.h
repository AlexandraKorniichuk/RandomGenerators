#pragma once
#include "../Generators/Uniform/UniformGeneratorBase.h"
#include "../Generators/Normal/NormalGenerator.h"

class TestGenerators
{
public:
    static void TestUniform(UniformGeneratorBase* generator);
    static void TestNormal(NormalGenerator* generator);
};
