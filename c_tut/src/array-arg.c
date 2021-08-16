#include <stdio.h>

void init_array(int array[], int size);

int main(void) {
    int nIntegres;
    printf("Desired number of elements: ");
    scanf("%d", &nIntegres);  /* Read input */

    int list[nIntegres];

    init_array(list, nIntegres);
    for (int i = 0; i < nIntegres; i++)
        printf("next: %d\n", list[i]);

    return 0;
}

void init_array(int array[], int size) { /* why size ? */
    /* arrays ALWAYS passed by reference */
    for (int i = 0; i < size; i++)
        array[i] = 0;
}
