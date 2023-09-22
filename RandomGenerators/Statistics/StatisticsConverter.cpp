#include "StatisticsConverter.h"

void StatisticsConverter::Convert(StatisticsType type, int& size, int& min, int& max, float& step)
{
    switch (type)
    {
    case Uniform:
        size = 10;
        min = 0;
        max = 1;
        step = 0.1f;
        break;
    case Normal:
        size = 6;
        min = -3;
        max = 3;
        step = 1;
        break;
    case Other:
        size = 100;
        min = 0;
        max = 100;
        step = 1;
        break;
    }
}
