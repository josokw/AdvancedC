#include <stdio.h>

int add(int a, int b);
int multiply(int a, int b);

int main(void)
{
   int result = 0;
   /* function pointer variable declaration */
   int (*fpointer)(int, int) = add;

   printf("Address 'add()'      = %p\nValue   'fpointer'   = %p\n", add,
          fpointer);

   /* function call by function pointer */
   result = fpointer(2, 5);
   printf("result = fpointer(2, 5);  result = %d\n\n", result);

   /* update function pointer variable */
   fpointer = multiply;
   printf("Address 'multiply()' = %p\nValue   'fpointer'   = %p\n",
          multiply, fpointer);

   /* function call by function pointer */
   result = fpointer(2, 5);
   printf("result = fpointer(2, 5);  result = %d\n", result);

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
