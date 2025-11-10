#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

bool same_elems(const int *a, const int *b, size_t n) {
    if (!a || !b) return false;
    for (size_t i = 0; i < n; ++i)
        if (a[i] != b[i]) return false;
    return true;
}

int main(void) {
    int n = 41;
    int *ptr_to_n = &n;
    (*ptr_to_n)++;
    printf("n after ++ via pointer = %d\n", n);

    int arr[3] = {10, 30, 2000};
    int *p = arr;
    for (size_t i = 0; i < 3; ++i)
        printf("arr[%zu] = %d at %p\n", i, *(p+i), (void*)(p+i));

    int a1[4] = {1,2,3,4};
    int a2[4] = {1,2,3,4};
    int a3[4] = {1,2,3,5};
    printf("a1 vs a2 same? %d\n", same_elems(a1,a2,4));
    printf("a1 vs a3 same? %d\n", same_elems(a1,a3,4));

    return 0;
}
