#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   const long MEGABYTE = 1024 * 1024L;
   long count = 1L;
   int *pData = NULL;

   while(count < 1000L) 
   {
      pData = (int*)malloc(MEGABYTE * sizeof(int));
      printf("%ld MByte  %p\n", count, pData);
      if (pData == NULL)
      {
         break;
      }
      count++;
   }

   return 0;
}
