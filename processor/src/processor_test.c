#include "processor.h"

int main(void)
{
    char inputBuffer[BUFFER_SIZE];

    while(true)
    {
        // get a line of input from the user
        printf("Enter a message, or type \"%s\" to stop > ", SENTINEL);
        scanf(" %[^\n]", inputBuffer);
        inputBuffer[BUFFER_SIZE-1] = '\0'; // ensure buffer is null-terminated

        if (strncmp(inputBuffer, SENTINEL, SENTINEL_LEN) == 0)
        {
            // stop when the SENTINEL is read in, but still process the remaining messages first
            messageDispatcher();
            printStatistics();
            break;
        }
        // add the message to the cache
        addMessageToCache(inputBuffer);
    }
}
