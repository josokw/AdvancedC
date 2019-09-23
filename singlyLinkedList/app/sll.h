#ifndef SLL_H
#define SLL_H

#include <stdlib.h>

/*! SLL node, data is 1 int */
typedef struct node {
   int data;
   struct node *pNextNode;
} node_t;

/*! Returns the size of the SLL (equals the number of nodes).
 * \todo Implement function.
 */
size_t sizeSLL(const node_t *pHead);

/*! Adds data in a new node at the end of the SLL. */
void addSLL(node_t **ppHead, int data);

/*! Empties the SLL.
 * \pre pHead == NULL
 */
void clearSLL(node_t **ppHead);

/*! Shows in ASCII the contents of all nodes from the head to the end 
 * of the list. 
 */
void showSLL(const node_t *pHead);

#endif
