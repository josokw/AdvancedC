#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isInt(const char str[]);

int main(int argc, char *argv[])
{
   int i = 0;
   int sum = 0;
   bool allAreIntegers = true;

   /* Always check the number of required arguments */
   if (argc < 2)
   {
      fprintf(stderr,
              "\tERROR %s: \n"
              "\tUSAGE: expected 1 or more integer typed "
              "commandline parameters\n\n",
              argv[0]);
      exit(EXIT_FAILURE);
   }

   /* Add all integer values found in the commandline */
   for (i = 1; i < argc; i++)
   {
      if (!isInt(argv[i]))
      {
         allAreIntegers = false;
         break;
      }
   }

   if (!allAreIntegers)
   {
      fprintf(stderr,
              "\tERROR: \n"
              "\tNot all command line parameters are integers!\n");
      exit(EXIT_FAILURE);
   }

   /* Add all integer values found in the commandline */
   for (i = 1; i < argc; i++)
   {
      sum += atoi(argv[i]);
   }
   printf("Sum of command line parameters = %d \n\n", sum);

   return 0;
}

bool isInt(const char str[])
{
   int i = 0;
   bool isInteger = true;

   while (str[i] != '\0')
   {
      if (!isdigit(str[i]))
      {
         isInteger = false;
         break;
      }
      i++;
   }
   return isInteger;
}
