/* Complex numbers: added in C99 and C11 */

#include <complex.h>
#include <stdio.h>

int main(void)
{
   double complex z1 = 1.0 + 3.0 * I;
   double complex z2 = 1.0 - 4.0 * I;
   double complex z3 = 0.0;
   double complex z4 = 0.0;
   double complex z5 = 0.0;

   printf("Working with complex numbers\n\n");

   printf(
      "Starting values:\n"
      "z1               = %6.2lf%+6.2lfi\n"
      "z2               = %6.2lf%+6.2lfi\n",
      creal(z1), cimag(z1), creal(z2), cimag(z2));

   double complex sum = z1 + z2;
   printf("z1 + z2          = %6.2f%+6.2fi\n", creal(sum), cimag(sum));

   double complex difference = z1 - z2;
   printf("z1 - z2          = %6.2f%+6.2fi\n", creal(difference),
          cimag(difference));

   double complex product = z1 * z2;
   printf("z1 x z2          = %6.2f%+6.2fi\n", creal(product),
          cimag(product));

   double complex quotient = z1 / z2;
   printf("z1 / z2          = %6.2f%+6.2fi\n", creal(quotient),
          cimag(quotient));

   double complex conjugate = conj(z1);
   printf("conjugate of z1  = %6.2f%+6.2fi\n\n", creal(conjugate),
          cimag(conjugate));

   z1 = I * I;
   printf("z1 = I * I       = %6.2f%+6.2fi\n", creal(z1), cimag(z1));

   z1 *= I;
   printf("z1 = I * I * I   = %6.2f%+6.2fi\n", creal(z1), cimag(z1));

   /* Multiplying conjugates */
   z4 = 1 + 2 * I;
   z5 = 1 - 2 * I;
   printf("z4 * z5          = %6.2f%+6.2fi\n\n", creal(z4 * z5),
          cimag(z4 * z5));

   /* ^ raise to the power
    * Calculate 1 + 5i^3 = ? */
   z1 = 1 + 5 * cpow(I, 3);
   printf("1 + 5i^3         = %6.2f%+6.2fi\n\n", creal(z1), cimag(z1));

   /* Calculate (2 + i) - (2i - 3) = ? */
   z1 = 2 + I;
   z2 = 2 * I - 3;
   z3 = z1 - z2;
   printf(
      "(2 + i)-(2i - 3) = %6.2f%+6.2fi  \n"
      "                 = in polar form r = %.2lf theta = %.2lf\n\n",
      creal(z3), cimag(z3), cabs(z3), carg(z3));

   return 0;
}
