#include "queue.h"
#include "unity.h"
#include <stdio.h>

const float DELTA = 0.001f;

void test_emptyQueue_createQueue(void)
{
   printf("---- 1. emptyQueue() and createQueue()\n");
   {
      data_t data = {1, "Hello queue"};
      /* Create empty queue, pBack = NULL */
      queue_t queue = {NULL};

      TEST_ASSERT_INT_WITHIN_MESSAGE(0, 1, emptyQueue(&queue), "test 1.1");

      createQueue(&queue, data);
      TEST_ASSERT_INT_WITHIN_MESSAGE(0, 0, emptyQueue(&queue), "test 1.2");
   }
}

void test_sizeQueue_createQueue(void)
{
   printf("\n---- 2. sizeQueue() and createQueue()\n");
   {
      data_t data = {1, "Hello queue"};
      /* Create empty queue, pBack = NULL */
      queue_t queue = {NULL};

      TEST_ASSERT_INT_WITHIN_MESSAGE(0, 0, sizeQueue(&queue), "test 2.1");

      createQueue(&queue, data);
      TEST_ASSERT_INT_WITHIN_MESSAGE(0, 1, sizeQueue(&queue), "test 2.2");
   }
}

int main(void)
{
   UNITY_BEGIN();
   printf("== queueCSLLtesting 'queueCSLL' tests ==\n\n");
   RUN_TEST(test_emptyQueue_createQueue);
   RUN_TEST(test_sizeQueue_createQueue);

   return UNITY_END();
}
