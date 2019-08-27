#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>

#define TEXT_SIZE 20 /*!< Limits the size of the string data in node. */

/*!
 * This struct must not contain pointers pointing outside the struct.
 */
typedef struct {
   int intVal;
   char text[TEXT_SIZE];
} data_t;

/*!
 * Node for the circular linear linked list (singly linked list).
 */
typedef struct node {
   data_t data;
   struct node *pNextNode;
} node_t;

/*!
 * Queue: First In First Out (FIFO).
 * Implementation: Circular Singly Linked List (CSLL).
 *
 * A queue has a front (for popping, is removing data from the queue) and
 * a back (for pushing, is inserting data into the queue).
 *
 * Needs only one external pointer pBack, that points at the back node.
 * The back node contains a pointer pointing to the front of the queue
 * (circular data structure).
 */
typedef struct {
   node_t *pBack;
   /*! node_t *pFront; only necessary for SLL implementation. */
} queue_t;

/*!
 * Creates queue with one node containing data.
 */
void createQueue(queue_t *pQueue, data_t data);
/*!
 * Checks is queue is empty.
 * \return 1 if empty else 0
 */
int emptyQueue(const queue_t *pQueue);
/*!
 * \return Number of nodes in the queue.
 * \todo Add implementation.
 */
size_t sizeQueue(const queue_t *pQueue);
/*!
 * \return ointer to the front node data of the queue.
 */
data_t *frontQueue(const queue_t *pQueue);
/*!
 * \return Pointer to the front node data of the queue.
 */
data_t *backQueue(const queue_t *pQueue);
/*!
 * Push new data to the back of the queue.
 * \pre pQueue != NULL
 */
void pushQueue(queue_t *pQueue, data_t data);
/*!
 * Remove data from the front of the queue.
 * \pre pQueue != NULL, size >= 1
 */
void popQueue(queue_t *pQueue);
/*!
 * Emptying (delete, deallocate) queue.
 * \todo Add implementation.
 */
void deleteQueue(queue_t *pQueue);
/*!
 * Shows the contents of queue in text, node by node.
 */
void showQueue(const queue_t *pQueue);

#endif
