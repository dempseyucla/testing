#include <stdio.h>

#define DANGER_LEVEL 5    /* C Preprocessor -
			- substitution on appearance */

/* like Java ‘final’ */
int main(void) {
    float level = 1;

    /* if-then-else as in Java */

    if (level <= DANGER_LEVEL) /*replaced by 5*/
        printf("Low on gas!\n");
    else
        printf("Good driver !\n");

    return 0;
}
