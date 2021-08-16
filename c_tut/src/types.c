#include <stdio.h>

int main(void) {
    int nStudents = 0; /* Initialization, required */

    printf("How many students does CSUCI have ?:");
    scanf("%d", &nStudents);  /* Read input */
    printf("CSUCI has %d students.\n", nStudents);

    return 0;
}
