#ifndef __PROCESSOR_H
#define __PROCESSOR_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SENTINEL "END"
#define SENTINEL_LEN strlen(SENTINEL)
#define CACHE_SIZE 16 // TODO For testing, you may want to change it to a smaller value
#define BUFFER_SIZE 256
#define NUM_OF_INTEGERS 4
#define NUM_OF_DOUBLES 5
#define NUM_OF_STRINGS 3
#define LENGTH_OF_STRINGS 7

typedef enum
{
    MSG_TYPE_1 = 1, // a string of unknown size
    MSG_TYPE_2,     // 4 integers
    MSG_TYPE_3,     // 5 doubles
    MSG_TYPE_4,     // 3 seven-character words
} MSG_TYPE;

#define NUMBER_OF_MSG_TYPES sizeof(MSG_TYPE)

typedef union {
    char *string;
    int integers[NUM_OF_INTEGERS];
    double doubles[NUM_OF_DOUBLES];
    char words[NUM_OF_STRINGS][LENGTH_OF_STRINGS + 1]; // +1 to accommodate EOS ('\0')
} MSG_CONTENT;

typedef struct {
    MSG_TYPE type;
    MSG_CONTENT content;
} MESSAGE;

void addMessageToCache(char *);
void messageDispatcher(void);
void processMessage(MESSAGE *);
void printStatistics(void);

#endif // __PROCESSOR_H
