#include <stdio.h>

#define MAX_NUM_OF_CELLS 128

int main(void) {
    int number[MAX_NUM_OF_CELLS];
    int sum = 0;

    for (int index = 0; index < MAX_NUM_OF_CELLS; index++) {
        number[index] = index;
    }
    /* now, number[index]=index; will cause error: why ?*/

    for (int index = 0; index < MAX_NUM_OF_CELLS; index = index + 1) {
        sum += number[index];  /* sum array elements */
    }

    printf("sum = %d\n", sum);

    return 0;
}
