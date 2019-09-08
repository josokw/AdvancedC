#include <stddef.h>
#include <stdio.h>

#define DATASIZE 5

int main(void)
{
   int iVar = 1;
   double dVar = 2.2;
   char cVar = 'A';
   int data[DATASIZE] = {1, 2, 3, 4, 5};

   /* Pointer variables of different types */
   int *pI = &iVar;
   double *pD = &dVar;
   char *pC = &cVar;
   int *pData = data;

   printf(" Size pointer variable pI = %lu bytes\n", sizeof(pI));
   printf(" Size pointer variable pD = %lu bytes\n", sizeof(pD));
   printf(" Size pointer variable pC = %lu bytes\n\n", sizeof(pC));

   printf(" pI %p points to %d\n", pI, *pI);
   printf(" pD %p points to %lf\n", pD, *pD);
   printf(" pC %p points to '%c'\n\n", pC, *pC);

   /* pData == &data[0] */
   printf(" pData %p points to %d\n", pData, *pData);

   /* pData is a pointer variable, so you can update the value, for
    * instance pData++.
    * data++ is not possible, this will result in a compiler error,
    * because you can not assign a new pointer value to an array variable.
    * An array variable is memory bound.
    */
   pData++;
   /* pData == &data[1] */
   printf(" pData %p points to %d\n", pData, *pData);

   pData += 3;
   /* pData == &data[4] */
   printf(" pData %p points to %d\n", pData, *pData);

   /* A pointer difference is typed as ptrdiff_t in stddef.h */
   ptrdiff_t pdif = pData - data;
   printf(" pData points to data[%ld] = %d\n\n", pdif, data[pdif]);

   pData += 10;
   /* Array bounds checking */
   if ((pData < data) || (pData > data + DATASIZE))
   {
      fprintf(stderr, " ERROR: pData accessing 'data' out of bounds\n\n");
   }

   return 0;
}
