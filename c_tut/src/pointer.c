#include <stdio.h>

int main(void) {

    int j = 1;  // what is j now?

    int *ptr = &j; /* initialize ptr before using it */

    *ptr = 4;   // what is j now?

    j = *ptr;   // what is j now?

    return 0;
}
