#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>

#define TEXT_SIZE 20

/* This struct must not contain pointers pointing outside the struct */
typedef struct
{
  int intVal;
  char text[TEXT_SIZE];
} data_t;

/* Implementation: circular linear linked list (singly linked list) */
typedef struct node
{
  data_t data;
  struct node *pNextNode;
} node_t;

typedef struct
{
  node_t *pBack;
  /* node_t *pFront; only necessary for SLL implementation */
} queue_t;

void createQueue(queue_t *pQueue, data_t data);
int emptyQueue(const queue_t *pQueue);
size_t sizeQueue(const queue_t *pQueue);
data_t *frontQueue(const queue_t *pQueue);
data_t *backQueue(const queue_t *pQueue);
void pushQueue(queue_t *pQueue, data_t data);
void popQueue(queue_t *pQueue);
void deleteQueue(queue_t *pQueue);
void showQueue(const queue_t *pQueue);

#endif
