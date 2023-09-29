#include "RandomGeneratorBase.h"
#include "Generators/Normal/ThreeSigmaGenerator.h"
#include "Generators/Uniform/FibonacciGenerator.h"
#include "Generators/Uniform/LinearCongruentGenerator.h"
#include "Generators/Uniform/QuadraticCongruentGenerator.h"
#include "Generators/Uniform/ReverseCongruentGenerator.h"
#include "Generators/Uniform/UnionGenerator.h"
#include "Tests/TestGenerators.h"


int main(int argc, char* argv[])
{
    auto* linearGenerator = new LinearCongruentGenerator(7);
    auto* quadraticGenerator = new QuadraticCongruentGenerator(3);
    auto* fibonacciGenerator = new FibonacciGenerator(5);
    auto* reverseGenerator = new ReverseCongruentGenerator(5);
    auto* unionGenerator = new UnionGenerator(5, fibonacciGenerator, linearGenerator);
    auto* sigmaGenerator = new ThreeSigmaGenerator(5, quadraticGenerator);

    while(true)
    {
        int method;
        cout << "Enter method" << endl;
        cin >> method;
    
        switch (method)
        {
        case 1:
            cout << "Linear Congruent Method" << endl;
            TestGenerators::TestUniform(linearGenerator);
            break;
        case 2:
            cout << endl;
            cout << "Quadratic Congruent Method" << endl;
            TestGenerators::TestUniform(quadraticGenerator);
            break;
        case 3:
            cout << endl;
            cout << "Fibonacci Method" << endl;
            TestGenerators::TestUniform(fibonacciGenerator);
            break;
        case 4:
            cout << endl;
            cout << "Reverse congruent Method" << endl;
            TestGenerators::TestUniform(reverseGenerator);
            break;
        case 5:
            cout << endl;
            cout << "Union Method" << endl;
            TestGenerators::TestUniform(unionGenerator);
            break;
        case 6:
            cout << endl;
            cout << "3 sigma Method" << endl;
            TestGenerators::TestNormal(sigmaGenerator);
            break;
        default:
            return 0;
        }
    }
    
    return 0;
}
