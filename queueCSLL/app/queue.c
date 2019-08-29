#include "queue.h"

#include <stdio.h>
#include <stdlib.h>

void createQueue(queue_t *pQueue, data_t data)
{
   node_t *pNew = (node_t *)malloc(sizeof(node_t));
   pQueue->pBack = pNew;
   if (pNew != NULL)
   {
      pNew->data = data; /* copy input struct data */
      pNew->pNextNode = pNew;
   }
}

int emptyQueue(const queue_t *pQueue)
{
   return pQueue->pBack == NULL;
}

size_t sizeQueue(const queue_t *pQueue)
{
   size_t size = 0;
   /* local pointer for traversing all nodes in queue */
   const node_t *pSize = pQueue->pBack;

   return size;
}

data_t *frontQueue(const queue_t *pQueue)
{
   data_t *pFrontData = NULL;
   if (!emptyQueue(pQueue))
   {
      pFrontData = &(pQueue->pBack->pNextNode->data);
   }
   return pFrontData;
}

data_t *backQueue(const queue_t *pQueue)
{
   data_t *pBackData = NULL;
   if (!emptyQueue(pQueue))
   {
      pBackData = &(pQueue->pBack->data);
   }
   return pBackData;
}

void pushQueue(queue_t *pQueue, data_t data)
{
   node_t *pNew = (node_t *)malloc(sizeof(node_t));
   if (pNew != NULL)
   {
      pNew->data = data;
      pNew->pNextNode = pQueue->pBack->pNextNode;
      pQueue->pBack->pNextNode = pNew;
      pQueue->pBack = pNew;
   }
}

void popQueue(queue_t *pQueue)
{
   if (pQueue->pBack != NULL)
   {
      node_t *pDelete = pQueue->pBack->pNextNode;
      if (pDelete == pQueue->pBack)
      {
         /* size queue == 1 */
         pQueue->pBack = NULL;
      }
      else
      {
         pQueue->pBack->pNextNode = pDelete->pNextNode;
      }
      free(pDelete);
   }
}

void deleteQueue(queue_t *pQueue)
{
   /* local pointer for traversing all nodes in queue */
   node_t *pDelete = pQueue->pBack;
   
}

void showQueue(const queue_t *pQueue)
{
   const node_t *pNext = pQueue->pBack;

   if (pNext == NULL)
   {
      printf("Queue is empty\n");
   }
   else
   {
      printf("Queue contains:\n");
      do
      {
         pNext = pNext->pNextNode;
         printf(
            "pNode = %p  Data = '%d' '%s'\n"
            "                        pNextNode = %p\n",
            pNext, pNext->data.intVal, pNext->data.text, pNext->pNextNode);
      } while (pNext != pQueue->pBack);
   }
}
