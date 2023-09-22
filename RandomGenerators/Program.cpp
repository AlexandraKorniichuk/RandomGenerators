#include "RandomGenerator.h"


int main(int argc, char* argv[])
{
    RandomGenerator* generator = new RandomGenerator();
    generator->Statistics->BuildHistogram();
    return 0;
}
