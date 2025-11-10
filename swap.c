#include <stdio.h>

void swap(void *x, void *y) {
    int temp = *(int*)x;
    *(int*)x = *(int*)y;
    *(int*)y = temp;
}

int main(void) {
    int a = 7, b = 42;
    printf("before: a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("after : a=%d b=%d\n", a, b);
    return 0;
}
