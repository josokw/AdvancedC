#include <stdio.h>

int main(void)
{
   int iVar = 1;
   double dVar = 2.2;
   char cVar = 'c';
   void *pGeneric = NULL;

   pGeneric = &iVar;
   printf(" pGeneric = %p points to %d\n", pGeneric, *(int *)pGeneric);

   pGeneric = &dVar;
   printf(" pGeneric = %p points to %lf\n", pGeneric, *(double *)pGeneric);

   pGeneric = &cVar;
   printf(" pGeneric = %p points to %c\n", pGeneric, *(char *)pGeneric);

   return 0;
}
