#include "sll.h"

#include <stdio.h>

size_t sizeSLL(const node_t *pHead)
{
   const node_t *pNext = pHead;
   size_t size = 0;

   if (pHead != NULL)
   {
      /* Needs to be implemented */
   }
   return size;
}

void addSLL(node_t **ppHead, int data)
{
   node_t *pNext = *ppHead;
   node_t *pNew = (node_t *)malloc(sizeof(node_t));

   /* Check if allocation has succeeded */
   if (pNew != NULL)
   {
      pNew->data = data;
      pNew->pNextNode = NULL;
   }
   if (pNext != NULL)
   {
      /* Traverse through every subsequent node in the SLL */
      while (pNext->pNextNode != NULL)
      {
         pNext = pNext->pNextNode;
      }
      pNext->pNextNode = pNew;
   }
   else
   {
      *ppHead = pNew;
   }
}

void clearSLL(node_t **ppHead)
{
   node_t *pToBeRemoved = *ppHead;
   node_t *pNext = NULL;

   while (pToBeRemoved != NULL)
   {
      pNext = pToBeRemoved->pNextNode;
      free(pToBeRemoved);
      pToBeRemoved = pNext;
   }
   *ppHead = NULL;
}

void showSLL(const node_t *pHead)
{
   const node_t *pNext = pHead;

   if (pHead == NULL)
   {
      printf("SLL is empty\n");
   }
   else
   {
      while (pNext != NULL)
      {
         printf("Node %p:  Data = %d  pNext = %p\n", pNext, pNext->data,
                pNext->pNextNode);
         pNext = pNext->pNextNode;
      }
   }
}