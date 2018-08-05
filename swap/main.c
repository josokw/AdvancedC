/* C uses call by value for passing function arguments.
 * We need a call by reference for changing an argument value
 * outside the function.
 */

#include <stdio.h>

void swapByValue(int a, int b);
void swap(int *pA, int *pB);

int main(void)
{
   int x = 2;
   int y = 3;

   printf("Initial values      x = %d  y = %d\n\n", x, y);
   swapByValue(x, y);
   printf("swapByValue(x, y);  x = %d  y = %d\n\n", x, y);

   /* Call by reference: using pointers */
   swap(&x, &y);
   printf("swap(&x, &y);       x = %d  y = %d\n\n", x, y);

   return 0;
}

/* Call by value */
void swapByValue(int a, int b)
{
   int temp = a;
   a = b;
   b = temp;
}

/* Call by reference: using pointers */
void swap(int *pA, int *pB)
{
   int temp = *pA;
   *pA = *pB;
   *pB = temp;
}
