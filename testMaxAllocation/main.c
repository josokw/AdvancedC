#include <stdio.h>
#include <stdlib.h>

typedef unsigned char byte_t;

int main(void)
{
   const long MEGABYTE = 1024 * 1024L;
   long count = 1L;
   byte_t *pMemory = NULL;

   while (1)
   {
      pMemory = (byte_t *)malloc(100 * MEGABYTE * sizeof(byte_t));
      if (pMemory == NULL)
      {
         break;
      }
      *pMemory = 1;
      count++;
      printf("%ld 100MByte  %p\n", count, pMemory);
   }

   return 0;
}
