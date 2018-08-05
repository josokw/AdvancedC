/* Singly Linked List: SLL */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
   int data;
   struct node *pNextNode;
} node_t;

void showSLL(const node_t *pHead);
size_t sizeSLL(const node_t *pHead);
void addSLL(node_t **ppHead, int data);
void clearSLL(node_t **ppHead);

int main(void)
{
   node_t *pHead = NULL; /* Create an empty SLL,
                            pHead is the 'owner' of the SLL */
   showSLL(pHead);
   printf("Size of the SLL = %lu\n", sizeSLL(pHead));

   printf("\nAdd new node to the SLL 0x%p:\n", pHead);
   addSLL(&pHead, 10);
   showSLL(pHead);
   printf("Size of the SLL = %lu\n\n", sizeSLL(pHead));

   printf("Add new node to the SLL 0x%p:\n", pHead);
   addSLL(&pHead, 20);
   showSLL(pHead);
   printf("Size of the SLL = %lu\n\n", sizeSLL(pHead));

   printf("Clear the SLL 0x%p:\n", pHead);
   clearSLL(&pHead);
   showSLL(pHead);
   printf("Size of the SLL = %lu\n\n", sizeSLL(pHead));

   return 0;
}

/* Shows the contents of all nodes from the head to the end of the list */
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

/* Returns the size of the SLL (equals the number of nodes) */
size_t sizeSLL(const node_t *pHead)
{
   const node_t *pNext = pHead;
   size_t size = 0;

   if (pHead != NULL)
   {
      /* @TODO Needs to be implemented */
   }
   return size;
}

/* Adds data to a new node at the end of the SLL */
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

/* Empties the SLL */
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
