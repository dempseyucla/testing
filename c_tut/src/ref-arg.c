#include <stdio.h>

int sum(int *, int *);

/* function prototype at start of file */

int main(void) {
    int a = 4, b = 5;
    int *ptr = &b;
    int total = sum(&a, ptr); /* call to the function */

    printf("The sum of %d and %d is %d\n", a, b, total);

    return 0;
}

int sum(int *pa, int *pb) {   /* the function itself - arguments passed by reference */
    return (*pa + *pb);      /* return by value */
}
