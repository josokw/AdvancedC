#include <stdio.h>

int main(void)
{
  unsigned int uiA = 123;
  unsigned int uiB = 0;
  int iC = -567;

  printf("Mixed types in expressions will cause problems\n\n");
  uiB = uiA + iC;
  printf("iC = %d is casted to unsigned int in mixed type expression: %u\n", iC, uiB);

  if (uiA < iC)
  {
     printf("Mixed type expression causes: 123 < -567\n");
  }
  else
  {
    printf("OK\n");
  }

  if ((int)uiA < iC)
  {
    printf("123 < -567\n");
  }
  else
  {
    printf("OK\n");
  }

  return 0;
}
