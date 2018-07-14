#include <stdio.h>

#define SIZE 4

int main(void)
{
   char *stringData[SIZE] = {"Hello", "world", "of", "pointers"};
   int i = 0;

   for (i = 0; i < SIZE; i++)
   {
      printf("%s ", stringData[i]);
   }
   puts("\n");

   /* Only printing the first character of every string
    * separated by a space.
    */
   for (i = 0; i < SIZE; i++)
   {
      printf("%c ", stringData[i][0]);
   }
   puts("\n");

   return 0;
}
