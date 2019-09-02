/* Singly Linked List: SLL */

#include "sll.h"

#include <stdio.h>
#include <stdlib.h>

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
