#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int compareInts(const void *pInt1, const void *pInt2);

int main(void)
{
   int i = 0;
   int data[SIZE] = {-1, 2, 5, -2, -4};

   qsort(data, SIZE, sizeof(int), compareInts);

   for (i = 0; i < SIZE; i++)
   {
      printf("%d ", data[i]);
   }
   printf("\n");

   return 0;
}

int compareInts(const void *pInt1, const void *pInt2)
{
   int i1 = *(const int *)pInt1;
   int i2 = *(const int *)pInt2;

   return i1 - i2;
}
