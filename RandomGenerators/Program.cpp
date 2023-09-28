#include "RandomGeneratorBase.h"
#include "Generators/Uniform/LinearCongruentGenerator.h"
#include "Tests/TestGenerators.h"


int main(int argc, char* argv[])
{
    auto* generator = new LinearCongruentGenerator(6);
    TestGenerators::TestUniform(generator);
    return 0;
}
