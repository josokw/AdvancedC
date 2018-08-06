/* Unit tests: using Unity unit test framework
 *
 * Test code should be complemented with more tests.
 */

#include "functions.h"
#include "unity.h"
#include <stdio.h>

const float DELTA = 0.001f;

void test_findMinMax(void)
{
   printf("---- findMinMax()\n");

   {
      float data1[1] = {-1.0};
      minmax_t result = findMinMax(data1, 1);

      TEST_ASSERT_FLOAT_WITHIN_MESSAGE(DELTA, -1.0, result.min, "test 1");
      TEST_ASSERT_FLOAT_WITHIN_MESSAGE(DELTA, -1.0, result.max, "test 2");
   }

   {
      float data2[5] = {-1.0, 0.0, 1.0, 2.0, 3.0};
      minmax_t result = findMinMax(data2, 5);

      TEST_ASSERT_FLOAT_WITHIN_MESSAGE(DELTA, -1.0, result.min, "test 3");
      TEST_ASSERT_FLOAT_WITHIN_MESSAGE(DELTA, 3.0, result.max, "test 4");
   }
}

void test_averageData(void)
{
   printf("\n---- averageData()\n");

   {
      float data1[5] = {1.0, 1.0, 1.0, 1.0, 1.0};
      float result = averageData(data1, 5);

      TEST_ASSERT_FLOAT_WITHIN_MESSAGE(DELTA, 1.0, result, "test 1");
   }
}

void test_setAverageData(void)
{
   printf("\n---- setAverageData()\n");

   {
      float data1[5] = {0.0, 1.0, 0.0, -1.0, 0.0};

      setAverageData(data1, 5, 2.0);
      TEST_ASSERT_FLOAT_WITHIN_MESSAGE(DELTA, 2.0, averageData(data1, 5),
                                       "test 1");
   }

   {
      float data2[5] = {1.0, -1.0, 1.0, -1.0, 1.0};

      setAverageData(data2, 5, 2.0);
      TEST_ASSERT_FLOAT_WITHIN_MESSAGE(DELTA, 2.0, averageData(data2, 5),
                                       "test 2");
   }
}

void test_setLimitData(void)
{
   printf("\n---- setLimitData()\n");

   float data1[4] = {1.0, -5.0, 5.0, -1.0};
   float min = -2.0;
   float max = 4.0;

   TEST_ASSERT(min < max && min < 0.0 && max > 0.0);
   setLimitData(data1, 4, min, max);
   TEST_ASSERT_FLOAT_WITHIN_MESSAGE(DELTA, min, findMinMax(data1, 4).min,
                                    "test 1");

   min = -2.0;
   max = 4.0;
   TEST_ASSERT(min < max && min < 0.0 && max > 0.0);
   setLimitData(data1, 4, min, max);
   TEST_ASSERT_FLOAT_WITHIN_MESSAGE(DELTA, max, findMinMax(data1, 4).max,
                                    "test 2");
}

int main(void)
{
   UNITY_BEGIN();
   printf("== introUnitTesting 'functions' tests ==\n\n");
   RUN_TEST(test_findMinMax);
   RUN_TEST(test_averageData);
   RUN_TEST(test_setAverageData);
   RUN_TEST(test_setLimitData);

   return UNITY_END();
}
