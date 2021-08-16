#include <stdio.h>

struct birthday {
    int month;
    int day;
    int year;
};

int main(void) {
    struct birthday myBday;    // - no ‘new’ needed !
                               // then, use dot notation like in Java ! */
    scanf("%d/%d/%d", &myBday.month, &myBday.day, &myBday.year);
    printf("I was born on %d/%d/%d\n", myBday.month, myBday.day, myBday.year);

    return 0;
}
