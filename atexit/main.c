#include <stdio.h>
#include <stdlib.h>

void shutdown(void);
int calculate(int x);

int main(void)
{
   int input = 0;

   printf("Function set to be executed on exit (if program terminates)\n");
   atexit(shutdown);

   for (input = -5; input < 20; input++)
   {
      printf("-- Calculating %d\n", calculate(input));
   }

   return 0;
}

void shutdown(void)
{
   fprintf(stderr, "Shutting down\n");
}

int calculate(int x)
{
   if (x < -10 || x > 10)
   {
      fprintf(stderr, "ERROR calculate(): '%d' is out of range\n", x);
      exit(EXIT_FAILURE);
   }
   return x * x * x * x;
}
