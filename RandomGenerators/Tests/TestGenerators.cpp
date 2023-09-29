#include "TestGenerators.h"

#include "../Generators/Normal/NormalGenerator.h"

void TestGenerators::TestUniform(UniformGeneratorBase* generator)
{
    constexpr int n = 1000;
    for (int i = 0; i < n; i++)
    {
        const float un = generator->GenerateUn();
        generator->Statistics->AddToStatistics(un);
    }
    generator->Statistics->BuildHistogram();
    generator->Statistics->ClearStatistics();
}

void TestGenerators::TestNormal(NormalGenerator* generator)
{
    constexpr int n = 1000;
    for (int i = 0; i < n; i++)
    {
        const float un = generator->GenerateNormal();
        generator->Statistics->AddToStatistics(un);
    }
    generator->Statistics->BuildHistogram();
    generator->Statistics->ClearStatistics();
}
