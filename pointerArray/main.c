#include <stdio.h>

#define SIZE 4

int main(void)
{
   /* Every string should be considered a pointer to the string */
   const char *stringData[SIZE] = {"Hello", "world", "of", "pointers"};
   int i = 0;

   for (i = 0; i < SIZE; i++)
   {
      printf("stringData[%d] = \"%s\"\n", i, stringData[i]);
   }
   puts("\n");

   /* Only printing the first character of every string */
   for (i = 0; i < SIZE; i++)
   {
      printf("stringData[%d][0] = '%c'\n", i, stringData[i][0]);
   }
   puts("\n");

   return 0;
}
