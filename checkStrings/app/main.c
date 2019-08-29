#include "checkStrings.h"
#include <stdio.h>

int main(void)
{
   const char* testInts[5] = {
      " ",
      " 1234  ",
      "\t12 ab\t ",
      "ab12 ",
      "abc"
   };
   const char* testMACaddresses[5] = {
      " 1:2:3:4:5:6    ",
      "   12:34:56:AA:BB:CC",
      "\t 12:34:56:AA:BB",
      " 12:34:56:AA:BB:CC:DD ",
      "12:34:56:AA:BB;CC"
   };
   char buffer[50] = {'\0'};

   int i = 0;

   for (i = 0; i < 5; i++)
   {
      trim(buffer, testInts[i]);
      printf("Test \"%s\" is int = %d\n", buffer, isInteger(buffer));
   }

   for (i = 0; i < 5; i++)
   {
      trim(buffer, testMACaddresses[i]);
      printf("Test \"%s\" is MAC address = %s\n",
             buffer,
             isMACaddress(buffer) ? "true" : "false");
   }

   return 0;
}
