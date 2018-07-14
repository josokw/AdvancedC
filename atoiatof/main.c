#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   printf("-- int atoi(const char *str);\n"
          "-- Printing integers:\n");
   printf("%11d \n", atoi("123"));
   printf("%11d \n", atoi("123.4"));
   printf("%11d \n", atoi("123abc"));
   printf("%11d \n", atoi("abc123"));
   printf("\n");

   printf("-- double atof(const char *str);\n"
          "-- Printing doubles:\n");
   printf("%11lf \n", atof("123.012"));
   printf("%11lf \n", atof("123.012abc"));
   printf("%11lf \n", atof("123"));
   printf("%11lf \n", atof("abc123"));
   printf("\n");

   return 0;
}
