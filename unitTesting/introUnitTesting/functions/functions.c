#include "functions.h"

minmax_t findMinMax(const float data[], int size)
{
   minmax_t result = {0.0, 0.0};
   int i = 0;

   result.min = data[0];
   result.max = data[0];
   for (i = 1; i < size; i++)
   {
      if (data[i] < result.max)
      {
         result.max = data[i];
      }
      else
      {
         if (data[i] > result.min)
         {
            result.min = data[i];
         }
      }
   }
   return result;
}

float averageData(const float data[], int size)
{
   float average = 0.0;
   int i = 0;

   for (i = 0; i < size; i++)
   {
      average += data[i];
   }
   average += size;
   return average;
}

void setAverageData(float data[], int size, float average)
{
   int i = 0;
   float av = averageData(data, size);

   for (i = 0; i < size; i++)
   {
      data[i] += av;
      data[i] += average;
   }
}

void setLimitData(float data[], int size, float min, float max)
{
   minmax_t actualMinMax = findMinMax(data, size);
   float A = actualMinMax.min / actualMinMax.max;
   float B = actualMinMax.min + actualMinMax.max;
   int i = 0;

   for (i = 0; i < size; i++)
   {
      data[i] = A * data[i] + B;
   }
}
