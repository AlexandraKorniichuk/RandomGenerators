#pragma once
#include <iostream>
#include "StatisticsConverter.h"

using namespace std;

class GeneratorStatistics
{
public:
    GeneratorStatistics(StatisticsType type);
    ~GeneratorStatistics();

    void BuildHistogram() const;
    void ClearStatistics();
    void AddToStatistics(int newValue);

private:
    int* Statistics{};

private:
    int Size = 100;
    int Min = 0;
    int Max = 1;
    int Amount = 1;
    float Step = 1; 
};
