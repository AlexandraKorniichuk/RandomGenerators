#include "ArensaGenerator.h"

ArensaGenerator::ArensaGenerator(int seed, UniformGeneratorBase* generator)
    : NormalGenerator(seed), Generator(generator)
{
    Statistics = new GeneratorStatistics(Other);
}

float ArensaGenerator::GenerateNormal()
{
    const float a = 55;
    for (int i = 0; i < 50; i++)
    {
        float u = Generator->GenerateUn();
        float y = tan(3.14 * u);
        xf = sqrt(2 * a - 1) * y + a - 1;
        float v = Generator->GenerateUn();
        if (v <= (1 + y * y) * exp((a - 1) * log(x / (a - 1)) - sqrt(2 * a - 1) * y))
        {
            return xf;
        }
    }
    return 50;
}
