#include <stdio.h>

int add(int a, int b);
int multiply(int a, int b);

int main(void)
{
   int result = 0;
   /* function pointer declaration */
   int (*fpointer)(int, int) = add;

   printf("Address 'add()'      = %p\nAddress 'fpointer'   = %p\n", add,
          fpointer);
   /* function call by function pointer */
   result = fpointer(2, 5);
   printf("result = %d\n\n", result);

   fpointer = multiply;
   printf("Address 'multiply()' = %p\nAddress 'fpointer'   = %p\n",
          multiply, fpointer);
   /* function call by function pointer */
   result = fpointer(2, 5);
   printf("result = %d\n", result);

   return 0;
}

int add(int a, int b)
{
   return a + b;
}

int multiply(int a, int b)
{
   return a * b;
}
