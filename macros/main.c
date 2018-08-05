#include <stdio.h>

/* Constant macros */
#define VALUE 25
#define OTHER_VALUE (2 * VALUE)

/* Function-like macros can take arguments, just like true functions. */
/* Macros are not type checked, pre-processor only replaces texts.    */
#define SQR(x) ((x) * (x))
#define PRINT_VALUE(f, x) printf("%s = %" #f "\n", #x, x)

/* Multi line macro */
#define TEST(condition)                                                   \
   if (!(condition))                                                      \
   fprintf(stderr, "TEST " #condition " is not satisfied\n")

/* C99 variadic macros: macros may have variable number of arguments */
#define WARNING(...) fprintf(stderr, __VA_ARGS__)

int main(void)
{
   int i1 = SQR(5);      /* int i1 = (5) * (5); */
   int i2 = SQR(i1);     /* int i2 = (i1) * (i1); */
   int i3 = SQR(1 + i1); /* int i3 = (1 + i1) * (1 + i1); */
   int i4 = SQR(VALUE);  /* int i4 = (VALUE) * (VALUE); */
                         /* int i4 = (100) * (100); */
   double d = SQR(1.1);  /* double d = (1.1) * (1.1); */

   PRINT_VALUE(d, i1);
   PRINT_VALUE(x, i2);
   PRINT_VALUE(d, i3);
   PRINT_VALUE(d, i4);
   PRINT_VALUE(d, OTHER_VALUE);
   PRINT_VALUE(lf, d);

   TEST(d > 2.0);
   TEST(i3 < 1 && i4 < 1);

   WARNING("Macros can become complex: %d\n", SQR(SQR(3)));

   /* Standard predefined macros */
   printf("Code compiled: %s %s  file: %s, line: %d in function: '%s'\n",
          __DATE__, __TIME__, __FILE__, __LINE__, __func__);

   return 0;
}
