#include <stdio.h>

void swap(int, int);

int main(void) {
    int num1 = 5, num2 = 10;

    printf("in main before the swap call: num1 = %d and num2 = %d\n", num1, num2);
    swap(num1, num2);
    printf("in main after the swap call: num1 = %d and num2 = %d\n", num1, num2);

    return 0;
}

void swap(int n1, int n2) { /* passed by value */
    int temp;

    printf("\nin swap method before swap: n1 = %d and n2 = %d\n", n1, n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("in swap method after swap: n1 = %d and n2 = %d\n\n", n1, n2);
}
