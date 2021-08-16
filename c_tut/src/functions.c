#include <stdio.h>

int sum(int, int);

/* function prototype at start of file */

int main(void) {
    int total = sum(4, 5); /* call to the function */

    printf("The sum of 4 and 5 is %d\n", total);

    return 0;
}

int sum(int a, int b) {   /* the function itself
				- arguments passed by value*/
    return (a + b);      /* return by value */
}
