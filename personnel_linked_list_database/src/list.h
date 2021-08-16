#ifndef LIST_H_
#define LIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    void *data;
    struct list *next;
} LIST;

void add(LIST **head, LIST **tail, void *data);
void clearIteratively(LIST **head, LIST **tail);
void clearRecursively(LIST **head, LIST **tail);
void delete(LIST **head, LIST **tail, void *data);

#endif /* LIST_H_ */
