/* C uses call by value for passing function arguments.
 * We need a call by reference for changing an argument value
 * outside the function.
 */

#include <stdio.h>

void swapByValue(int a, int b);
void swap(int *pA, int *pB);

int main(void)
{
   const int init_x = 2;
   const int init_y = 3;
   int x = init_x;
   int y = init_y;

   printf("Initial values      x = %d  y = %d\n\n", x, y);
   swapByValue(x, y);
   printf("swapByValue(x, y);  x = %d  y = %d", x, y);
   if (x == init_y && y == init_x)
   {
      puts("  values are swapped");
   }
   else
   {
      puts("  values are not swapped\n");
   }
   
   /* Call by reference: using pointers */
   swap(&x, &y);
   printf("swap(&x, &y);       x = %d  y = %d", x, y);
   if (x == init_y && y == init_x)
   {
      puts("   values are swapped");
   }
   else
   {
      puts("   values are not swapped\n");
   }

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
