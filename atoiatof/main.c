#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   printf(
      "-- int atoi(const char *str);\n"
      "-- Printing integers:\n");

   printf("   123    => %8d \n", atoi("123"));
   printf("   123.4  => %8d \n", atoi("123.4"));
   printf("   123abc => %8d \n", atoi("123abc"));
   printf("   abc123 => %8d \n", atoi("abc123"));
   puts("");

   printf(
      "-- double atof(const char *str);\n"
      "-- Printing doubles:\n");
      
   printf("   123.012    => %11lf \n", atof("123.012"));
   printf("   123.012abc => %11lf \n", atof("123.012abc"));
   printf("   123        => %11lf \n", atof("123"));
   printf("   abc123     => %11lf \n", atof("abc123"));
   puts("");

   return 0;
}
