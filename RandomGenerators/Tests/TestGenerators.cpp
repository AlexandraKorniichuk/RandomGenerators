#include "TestGenerators.h"

void TestGenerators::TestUniform(UniformGeneratorBase* generator)
{
    constexpr int n = 100;
    for (int i = 0; i < n; i++)
    {
        generator->Generate();
        const float un = generator->CalculateUn();
        generator->Statistics->AddToStatistics(un);
    }
    generator->Statistics->BuildHistogram();
    generator->Statistics->ClearStatistics();
}
