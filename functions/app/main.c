#include "functions.h"

#include <stdio.h>

#define SIZE1 10
#define SIZE2 5

int main(void)
{
   float data1[SIZE1] = {-3.01, 1.05, 0.04,  -1.23, -2.5,
                         1.234, -0.4, -0.23, 1.28,  -2.7};
   float data2[SIZE2] = {1.051, 0.0423, -1.2, -2.24, 2.234};
   minmax_t minmax1 = {0.0, 0.0};
   minmax_t minmax2 = {0.0, 0.0};

   puts(
      "Program started "
      "-------------------------------------\n");

   setAverageData(data1, SIZE1, 1.0);
   printf("  Average data1 = %f\n", averageData(data1, SIZE1));
   setAverageData(data2, SIZE2, 2.0);
   printf("  Average data2 = %f\n", averageData(data2, SIZE2));

   setLimitData(data1, 10, -1.0, 1.0);
   minmax1 = findMinMax(data1, SIZE1);
   printf("  data1 min = %f  max = %f\n", minmax1.min, minmax1.max);

   setLimitData(data2, SIZE2, -3.0, 2.0);
   minmax2 = findMinMax(data2, SIZE2);
   printf("  data2 min = %f  max = %f\n\n", minmax2.min, minmax2.max);

   puts(
      "Program ready "
      "--------------------------------------------------\n");

   return 0;
}
