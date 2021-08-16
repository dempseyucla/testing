#include <stdio.h>

void swapIntegers(int *, int *);

int main(void) {
    int num1 = 5, num2 = 10;

    printf("Before the swap: num1 = %d and num2 = %d\n", num1, num2);
    swapIntegers(&num1, &num2);
    printf("After the swap: num1 = %d and num2 = %d\n", num1, num2);

    return 0;
}

void swapIntegers(int *n1, int *n2) { /* passed and returned by using values of pointers */
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
