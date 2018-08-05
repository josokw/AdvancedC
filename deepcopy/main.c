#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
   int count;
   char *pText; /* must point to dynamic allocated memory! */
} problem_t;

int deepCopy(problem_t *pDestination, const problem_t *pSource);

int main(void)
{
   problem_t s1 = {1, NULL}; /* do not do ... = {1, "ABC"} */
   problem_t s2 = {2, NULL};

   s1.pText = (char *)malloc(4 * sizeof(char)); /* array of 4 chars */
   if (s1.pText != NULL)
   {
      strcpy(s1.pText, "111");
      s2 = s1;           /* shallow copy, problem? */
      s2.pText[0] = 'A'; /* problem? */

      printf("s1 = %d %s\n", s1.count, s1.pText);
      printf("s2 = %d %s\n", s2.count, s2.pText);

      free(s1.pText); /* problem? */
   }
   s2.pText[1] = 'B'; /* problem? */

   printf("s1 = %d %s\n", s1.count, s1.pText);
   printf("s2 = %d %s\n", s2.count, s2.pText);

   return 0;
}

int deepCopy(problem_t *pDestination, const problem_t *pSource)
{
   /* TODO implementation, update main() code,
    * call this function in main() to avoid the problems of
    * a shallow copy.
    */

   /* TODO should return an error code if memory allocation fails */
   return 0;
}
