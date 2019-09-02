#include <stdio.h>

#define MAX_ROW 4
#define MAX_COLUMN 3
#define MAX_DEPTH 2

void print1DimArray(int ar1D[], size_t size);
void print2DimArray(int ar2D[][MAX_COLUMN], size_t size);
void print3DimArray(int ar3D[][MAX_COLUMN][MAX_DEPTH], size_t size);

int main(void)
{
   int data1D[MAX_ROW] = {1, 2, 3, 4};

   int data2D[MAX_ROW][MAX_COLUMN] = {
      {1, 2, 3}, {10, 20, 30}, {100, 200, 300}, {1000, 2000, 3000}};

   int data3D[MAX_ROW][MAX_COLUMN][MAX_DEPTH] = {
      {{100, 110}, {200, 210}, {300, 310}},
      {{101, 111}, {201, 211}, {301, 311}},
      {{102, 122}, {202, 222}, {302, 322}},
      {{103, 133}, {203, 233}, {303, 333}}};

   printf("---- 1 dimensional array (%d):\n", MAX_ROW);
   print1DimArray(data1D, MAX_ROW);

   printf("\n---- 2 dimensional array (%d x %d):\n", MAX_ROW, MAX_COLUMN);
   print2DimArray(data2D, MAX_ROW);

   printf("\n---- 3 dimensional array (%d x %d x %d):\n", MAX_ROW, MAX_COLUMN,
          MAX_DEPTH);
   print3DimArray(data3D, MAX_ROW);

   return 0;
}

void print1DimArray(int ar1D[], size_t size)
{
   size_t i = 0;
   for (i = 0; i < size; i++)
   {
      printf("%4d ", ar1D[i]);
   }
   puts("");
}

void print2DimArray(int ar2D[][MAX_COLUMN], size_t size)
{
   size_t i = 0;
   size_t j = 0;

   for (i = 0; i < size; i++)
   {
      for (j = 0; j < MAX_COLUMN; j++)
      {
         printf("%4d ", ar2D[i][j]);
      }
      puts("");
   }
}

void print3DimArray(int ar3D[][MAX_COLUMN][MAX_DEPTH], size_t size)
{
   size_t i = 0;
   size_t j = 0;
   size_t k = 0;

   for (k = 0; k < MAX_DEPTH; k++)
   {
      for (i = 0; i < size; i++)
      {
         for (j = 0; j < MAX_COLUMN; j++)
         {
            printf("%4d ", ar3D[i][j][k]);
         }
         puts("");
      }
      puts("");
   }
}
