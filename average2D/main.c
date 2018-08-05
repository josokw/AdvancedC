#include <stdio.h>

void average2D(double *pD1, double *pD2);

int main(void)
{
   double d1 = 2.0;
   double d2 = 3.0;

   average2D(&d1, &d2);
   printf(" d1 = %lf   d2 = %lf\n", d1, d2);

   return 0;
}

void average2D(double *pD1, double *pD2)
{
#warning function average2D() needs to be implemented!
}
