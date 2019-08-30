/* Unit tests: using Unity unit test framework */

#include "checkStrings.h"
#include "unity.h"
#include <stdio.h>

const float DELTA = 0.001f;

void test_trim(void)
{
   printf("---- trim()\n");

   {
      const char str[] = "test";
      const char expected[] = "test";
      char dest[100] = {'\0'};

      trim(dest, str);
      TEST_ASSERT_EQUAL_STRING_MESSAGE(expected, dest, "test 1");
   }
   {
      const char str[] = " test test test  ";
      const char expected[] = "test test test";
      char dest[100] = {'\0'};

      trim(dest, str);
      TEST_ASSERT_EQUAL_STRING_MESSAGE(expected, dest, "test 2");
   }
   {
      const char str[] = "\t test \t test test     test\t ";
      const char expected[] = "test \t test test     test";
      char dest[100] = {'\0'};

      trim(dest, str);
      TEST_ASSERT_EQUAL_STRING_MESSAGE(expected, dest, "test 3");
   }
}

void test_isInteger(void)
{
   printf("\n---- isInteger()\n");

   TEST_ASSERT_TRUE_MESSAGE(isInteger("0"), "test 1");
   TEST_ASSERT_TRUE_MESSAGE(isInteger("123"), "test 2");
   TEST_ASSERT_TRUE_MESSAGE(isInteger("-123"), "test 3");
   TEST_ASSERT_TRUE_MESSAGE(isInteger("+123"), "test 4");

   TEST_ASSERT_FALSE_MESSAGE(isInteger("a123"), "test 5");
}

void test_isMACaddress(void)
{
   printf("\n---- isMACaddress()\n");

   TEST_FAIL_MESSAGE("Tests not yet implemented");
}

int main(void)
{
   UNITY_BEGIN();
   printf("== Unit tests 'checkStrings' ==\n\n");
   RUN_TEST(test_trim);
   RUN_TEST(test_isInteger);
   RUN_TEST(test_isMACaddress);

   return UNITY_END();
}
