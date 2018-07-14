#include <stdio.h>

int main(void)
{
   int iVar = 1;
   double dVar = 2.2;
   char cVar = 'A';
   int data[3] = {1, 2, 3};

   /* Pointer variables of different types */
   int *pI = &iVar;
   double *pD = &dVar;
   char *pC = &cVar;
   int *pData = data;

   printf(" Size pointer variable pI = %lu bytes\n", sizeof(pI));
   printf(" Size pointer variable pD = %lu bytes\n", sizeof(pD));
   printf(" Size pointer variable pC = %lu bytes\n\n", sizeof(pC));

   printf(" pI %p points to %d\n", pI,  *pI);
   printf(" pD %p points to %lf\n", pD, *pD);
   printf(" pC %p points to %c\n\n", pC, *pC);

   printf(" pData %p points to %d\n", pData, *pData); /* pData == &data[0] */

   /* pData is a pointer variable, so you can update the value,
    * for instance pData++.
    * data++ is not possible, this will result in a compiler error,
    * because you can not assign a new pointer value to an array variable.
    * An array variable is memory bound.
    */
   pData++;
   printf(" pData %p points to %d\n\n", pData,  *pData); /* pData == &data[1] */

   printf(" Pointer distance = %ld int's\n", &data[3] - &data[0]);

   return 0;
}
