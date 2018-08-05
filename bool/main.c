/* bool type in C language: it is a logical type introduced from C99.
 * It is the replacement of _Bool type. It takes just 1 byte to store
 * either true or false. 1 is stored when true is assigned and 0 is
 * stored when false is assigned.
 *
 * A pre-processor statement #include<stdbool.h> is added to the program
 * to use the bool type.
 *
 * %d is the format specifier used to represent a bool in printf()
 * and scanf().
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isEven(int x);
bool stringIsAllUppercase(const char str[]);

int main(void)
{
   int a = 2;
   int b = 10;
   int i = 0;
   char text1[10] = "ABCD";
   char text2[10] = "abCD";

   bool isOK = false;
   bool isSmallerThan = a < b; /* gives 1 == true */

   printf("  Size of bool is: %lu byte(s)\n\n", sizeof(bool));

   printf("  (a < b) == (%d < %d) == %d\n", a, b, isSmallerThan);

   printf("  isOK = %s\n\n", isOK ? "true" : "false");

   for (i = 10; i < 16; i++)
   {
      if (!isEven(i))
      {
         printf("  %d is odd\n", i);
      }
   }
   printf("\n");

   if (stringIsAllUppercase(text1))
   {
      printf("  String '%s' contains only uppercase characters\n\n",
             text1);
   }
   if (!stringIsAllUppercase(text2))
   {
      printf("  String '%s' contains not only uppercase characters\n\n",
             text2);
   }

   return 0;
}

bool isEven(int x)
{
   return (x % 2 == 0);
}

bool stringIsAllUppercase(const char str[])
{
   bool result = true;
   size_t size = strlen(str);
   size_t i = 0;

   for (i = 0; i < size; i++)
   {
      if (!isupper(str[i]))
      {
         result = false;
         /* break will immediately terminate the for-loop */
         break;
      }
   }
   return result;
}
