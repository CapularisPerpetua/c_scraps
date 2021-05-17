#include <stdio.h>

void swap(int *, int *);

int main(void)
{
    int a = 21; // initialize a to 21
    int b = 17; // initialize b to 17

    swap(&a,&b); // swap values of a and b

    printf("main: a = %d, b = %d\n", a, b); // print results of swap
    return 0; // return
}

void swap(int * a, int * b)
{
    int t = *a;
    *a = *b;
    *b = t;
    printf("swap: a = %d, b = %d\n", *a, *b);
    return;
}
