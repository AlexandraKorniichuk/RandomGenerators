#include "RandomGeneratorBase.h"
#include "Generators/Uniform/FibonacciGenerator.h"
#include "Generators/Uniform/LinearCongruentGenerator.h"
#include "Generators/Uniform/QuadraticCongruentGenerator.h"
#include "Generators/Uniform/ReverseCongruentGenerator.h"
#include "Generators/Uniform/UnionGenerator.h"
#include "Tests/TestGenerators.h"


int main(int argc, char* argv[])
{
    cout << "Linear Congruent Method" << endl;
    auto* linearGenerator = new LinearCongruentGenerator(7);
    TestGenerators::TestUniform(linearGenerator);
    
    cout << endl;
    cout << "Quadratic Congruent Method" << endl;
    auto* quadraticGenerator = new QuadraticCongruentGenerator(2);
    TestGenerators::TestUniform(quadraticGenerator);

    cout << endl;
    cout << endl;
    cout << "Fibonacci Method" << endl;
    auto* fibonacciGenerator = new FibonacciGenerator(5);
    TestGenerators::TestUniform(fibonacciGenerator);

    cout << endl;
    cout << "Reverse congruent Method" << endl;
    auto* reverseGenerator = new ReverseCongruentGenerator(5);
    TestGenerators::TestUniform(reverseGenerator);

    cout << endl;
    cout << "Union Method" << endl;
    auto* unionGenerator = new UnionGenerator(5, fibonacciGenerator, linearGenerator);
    TestGenerators::TestUniform(unionGenerator);
    
    return 0;
}
