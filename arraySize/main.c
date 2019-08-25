#include <stdio.h>

#define ARRAYSIZE 4

void printArraySize(const double b[]);

int main(void)
{
   double buffer[ARRAYSIZE] = {1.0, 2.0, 3.0, 4.0};
   size_t size = 0;

   printf("Size double    = %zu bytes\n\n", sizeof(double));
   /* buffer is an array type variable */
   printf("Size buffer    = %zu bytes\n", sizeof(buffer));
   printf("Size buffer[0] = %zu bytes\n", sizeof(buffer[0]));
   size = sizeof(buffer) / sizeof(buffer[0]);
   printf("Number of data values in buffer = %zu  ", size);

   if (size == ARRAYSIZE)
   {
      printf("is correct\n");
   }
   puts("");
   
   /* buffer becomes pointer type! */
   printArraySize(buffer);

   return 0;
}

void printArraySize(const double b[])
{
   size_t size = 0;
   /* b is an array pointer type: double* */
   printf("Size b         = %zu bytes\n", sizeof(b));
   printf("Size b[0]      = %zu bytes\n", sizeof(b[0]));
   size = sizeof(b) / sizeof(b[0]);
   printf("Number of data values in array b = %zu  ", size);
   if (size != ARRAYSIZE)
   {
      printf("is not correct\n");
   }
}
