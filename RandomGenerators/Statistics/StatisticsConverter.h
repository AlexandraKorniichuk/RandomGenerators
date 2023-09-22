#pragma once

enum StatisticsType
{
    Uniform,
    Normal,
    Other
};

class StatisticsConverter
{
public:
    static void Convert(StatisticsType type, int& size, int& min, int& max, float& step);
};
