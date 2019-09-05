/* Unit tests: using C++ Catch2 unit test framework
 *
 * Test code should be complemented with more tests.
 */

#include "catch.hpp"

/* Make function names C linkable (no C++ name mangling) */
extern "C" {
#include "functions.h"
}

#include <stdio.h>

TEST_CASE("Functions")
{
   SECTION("test_findMinMax")
   {
      printf("---- findMinMax()\n");
      {
         float data1[1] = {-1.0};
         minmax_t result = findMinMax(data1, 1);

         REQUIRE(result.min == Approx(-1.0));
         REQUIRE(result.max == Approx(-1.0));
      }

      {
         float data2[5] = {-1.0, 0.0, 1.0, 2.0, 3.0};
         minmax_t result = findMinMax(data2, 5);

         REQUIRE(result.min == Approx(-1.0));
         REQUIRE(result.max == Approx(3.0));
      }
   }

   SECTION("test_averageData")
   {
      printf("\n---- averageData()\n");
      {
         float data1[5] = {1.0, 1.0, 1.0, 1.0, 1.0};
         float result = averageData(data1, 5);

         REQUIRE(result == Approx(1.0));
      }
   }

   SECTION("test_setAverageData")
   {
      printf("\n---- setAverageData()\n");
      {
         float data1[5] = {0.0, 1.0, 0.0, -1.0, 0.0};

         setAverageData(data1, 5, 2.0);

         REQUIRE(averageData(data1, 5) == Approx(2.0));
      }
      
      {
         float data2[5] = {1.0, -1.0, 1.0, -1.0, 1.0};

         setAverageData(data2, 5, 2.0);

         REQUIRE(averageData(data2, 5) == Approx(2.0));
      }
   }

   SECTION("test_setLimitData")
   {
      printf("\n---- setLimitData()\n");

      float data1[4] = {1.0, -5.0, 5.0, -1.0};
      float mind = -2.0;
      float maxd = 4.0;

      REQUIRE((mind < maxd && mind < 0.0 && maxd > 0.0));
      setLimitData(data1, 4, mind, maxd);
      REQUIRE(findMinMax(data1, 4).min == Approx(mind));

      mind = -2.0;
      maxd = 4.0;
      REQUIRE((mind < maxd && mind < 0.0 && maxd > 0.0));
      setLimitData(data1, 4, mind, maxd);
      REQUIRE(findMinMax(data1, 4).max == Approx(maxd));
   }
}
