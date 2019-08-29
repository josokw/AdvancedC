#include <stdio.h>

int main(void)
{
   unsigned int uiA = 123;
   unsigned int uiB = 0;
   int iC = -567;

   printf("Mixed types in expressions will cause problems!\n\n");

   uiB = uiA + iC;
   printf(
      "uiB = uiA + iC;\n"
      "iC = %d is casted to unsigned int: %u\n"
      "Mixed type expression causes: uiB = %u\n\n",
      iC, iC, uiB);

   if (uiA < iC)
   {
      printf(
         "uiA < iC\n"
         "iC = %d is casted to unsigned int: %u\n"
         "Mixed type expression causes: 123 < -567 to be true\n\n", iC, iC);
   }
   else
   {
      printf("OK\n");
   }

   return 0;
}
