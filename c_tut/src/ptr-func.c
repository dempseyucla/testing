#include <stdio.h>

void myProc(int);

void myCaller(void (*)(int), int);

int main(void) {
    myProc(10);        // call myProc with argument 10
    myCaller(myProc, 10); // and do the same again !

    return 0;
}

void myCaller(void (*f)(int), int param) {
    (*f)(param);    /* call function *f with param */
}

void myProc(int d) {
    /* do something with d */
    printf("In myProc().\n");
}
