#include "list.h"

void add(LIST **head, LIST **tail, void *data)
{
    // TODO implement the function
}

void clearIteratively(LIST **head, LIST **tail)
{
    if (*head == NULL)
        return;

    LIST *currNode = *head;
    LIST *nextNode = NULL;
    do
    {
        nextNode = currNode->next;

        if (currNode->data != NULL)
            free(currNode->data);

        free(currNode);

        currNode = nextNode;

    } while (currNode != NULL);

    *head = NULL;
    *tail = NULL;
}

void clearRecursively(LIST **currNode, LIST **tail)
{
    // TODO implement the function
}

void delete(LIST **head, LIST **tail, void *data)
{
    // TODO implement the function
}