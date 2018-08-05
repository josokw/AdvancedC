/* Function pointers and callback functions */

#include <math.h>
#include <stdio.h>

typedef double (*callbackMath_t)(double);

int sqr(int x);
int redouble(int x);
int halve(int x);

int compose(int x, int (*pf1)(int), int (*pf2)(int));
double composeMath(double x, callbackMath_t f1, callbackMath_t f2);

int main(void)
{
   printf("sqr(sqr(1)) = %d\n", compose(1, sqr, sqr));
   printf("sqr(redouble(1)) = %d\n", compose(1, redouble, sqr));
   printf("halve(redouble(2) = %d\n", compose(2, redouble, halve));
   printf("sin(sqrt(1.0)) = %lf\n", composeMath(1.0, sqrt, sin));

   return 0;
}

int sqr(int x)
{
   return x * x;
}

int redouble(int x)
{
   return x + x;
}

int halve(int x)
{
   return x / 2;
}

int compose(int x, int (*pf1)(int), int (*pf2)(int))
{
   return pf2(pf1(x));
}

double composeMath(double x, callbackMath_t f1, callbackMath_t f2)
{
   return f2(f1(x));
}
