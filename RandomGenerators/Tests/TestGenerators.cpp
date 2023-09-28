#include "TestGenerators.h"

void TestGenerators::TestUniform(LinearCongruentGenerator* generator)
{
    for (int i = 0; i < 100; i++)
    {
        generator->Generate();
        float un = generator->CalculateUn();
        generator->Statistics->AddToStatistics(un);
    }
    generator->Statistics->BuildHistogram();
    generator->Statistics->ClearStatistics();
}
