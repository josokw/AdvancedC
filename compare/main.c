#include <float.h>
#include <math.h>
#include <stdio.h>

#define EPSILON 1e-9

int fequal(double a, double b);

int main(void)
{
   double d1 = 0.1;
   double d2 = 0.2;
   float f1 = 0.1;

   printf(
      "Smallest double value != 0.0\n"
      "        = %.17lf\n\n",
      DBL_EPSILON);
   printf(
      "Smallest float value != 0.0\n"
      "        = %.17f\n\n",
      FLT_EPSILON);

   printf("d1      = %.17lf\n", d1);
   printf("f1      = %.17f\n", f1);
   printf("d2      = %.17lf\n\n", d2);
   printf("d1 + d2 = %.17lf\n\n", d1 + d2);

   if (d1 == f1)
   {
      printf("double d1 0.1 == float f1 0.1\n\n");
   }
   else
   {
      printf("double d1 0.1 != float f1 0.1\n\n");
   }

   if (d1 + d2 == 0.3)
   {
      printf("d1 + d2 == 0.3   0.1 + 0.2 == 0.3\n\n");
   }
   else
   {
      printf("d1 + d2 != 0.3   0.1 + 0.2 != 0.3\n\n");
   }

   if (fequal(d1 + d2, 0.3))
   {
      printf(
         "fequal(d1 + d2, 0.3)   0.1 + 0.2 == 0.3\n"
         "                       for EPSILON == "
         "%.15lf\n\n",
         EPSILON);
   }
   else
   {
      printf(
         "fequal(d1 + d2, 0.3)   0.1 + 0.2 != 0.3\n"
         "                       for EPSILON == "
         "%.15lf\n\n",
         EPSILON);
   }

   return 0;
}

int fequal(double a, double b)
{
   return fabs(a - b) < EPSILON;
}
