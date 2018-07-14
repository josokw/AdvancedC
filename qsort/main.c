#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct
{
   int iData;
   double dData;
} data_t;

/* comparison functions */
int compareInts(int i1, int i2);
int compareDoubles(double d1, double d2);
int compareData(const void *pD1, const void *pD2);

int main(void)
{
   int i = 0;
   data_t data[SIZE] = {
     {2, 10.1},
     {2, 30.2},
     {2, 20.3},
     {-2, 100.20},
     {-2, 100.10}
   };

   printf("---- Not sorted:\n");
   for (i = 0; i < SIZE; i++)
   {
      printf("{%d, %.3lf}\n", data[i].iData, data[i].dData);
   }
   printf(" \n");

   /* Sorting algorithm: quick sort */
   /* compareData is a function pointer to a callback function */
   qsort(data, SIZE, sizeof(data_t), compareData);

   printf("-------- Sorted:\n");
   for (i = 0; i < SIZE; i++)
   {
      printf("{%d, %.3lf}\n", data[i].iData, data[i].dData);
   }
   printf("\n");

   return 0;
}

int compareInts(int i1, int i2)
{
   if (i1 < i2) return -1;
   if (i1 > i2) return 1;
   return 0;
}

int compareDoubles(double d1, double d2)
{
   if (d1 < d2) return -1;
   if (d1 > d2) return 1;
   return 0;
}

/* callback function for qsort */
int compareData(const void *pD1, const void *pD2)
{
   const data_t *pData1 = (const data_t*)pD1;
   const data_t *pData2 = (const data_t*)pD2;

   if ((pData1->iData) == (pData2->iData))
   {
      return compareDoubles(pData1->dData, pData2->dData);
      /* Next return is not correct for doubles, result is converted to int
       * return pData1->dData - pData2->dData;
       */
   }
   return (pData1->iData) - (pData2->iData);
   /* Or using compareInts()
    * return compareInts(pData1->iData, pData2->iData);
    */
}
