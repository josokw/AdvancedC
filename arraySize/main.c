#include <stdio.h>

#define ARRAYSIZE 4

void printArraySize(const double b[]);

int main(void)
{
   double buffer[ARRAYSIZE] = {1.0, 2.0, 3.0, 4.0};

   /* buffer is an array type variable */
   printf("Size buffer    = %lu bytes\n", sizeof(buffer));
   printf("Size buffer[0] = %lu bytes\n", sizeof(buffer[0]));
   printf("Number of data values in buffer = %lu\n\n",
          sizeof(buffer) / sizeof(buffer[0]));

   /* buffer becomes pointer type! */
   printArraySize(buffer);

   return 0;
}

void printArraySize(const double b[])
{
   /* b is an array pointer type: double* */
   printf("Size b         = %lu bytes\n", sizeof(b));
   printf("Size b[0]      = %lu bytes\n", sizeof(b[0]));
   printf("Number of data values in buffer = %lu is wrong\n\n",
          sizeof(b) / sizeof(b[0]));
}
