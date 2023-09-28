#include "GeneratorStatistics.h"

GeneratorStatistics::GeneratorStatistics(StatisticsType type)
{
    StatisticsConverter::Convert(type, Size, Min, Max, Step);
    ClearStatistics();
}

GeneratorStatistics::~GeneratorStatistics()
{
    delete[] Statistics;
}

void GeneratorStatistics::BuildHistogram() const
{
    float value = Min;
    for (int i = 0; i < Size; i++)
    {
        cout << "[" << value << "; " << value + Step << "] " << (float)Statistics[i] / Amount << endl;
        value += Step;
    }
}

void GeneratorStatistics::ClearStatistics()
{
    Statistics = new int[Size];
    for (int i = 0; i < Size; i++)
    {
        Statistics[i] = 0;
    }
}

void GeneratorStatistics::AddToStatistics(float newValue)
{
    float value = Min;
    for (int i = 1; i <= Size; i++)
    {
        if (newValue <= value)
        {
            Statistics[i - 1]++;
            Amount++;
            break;
        }
        value += Step;
    }
}
