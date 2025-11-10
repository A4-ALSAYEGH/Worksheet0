#include <stdio.h>

int main(void) {
    int n = 10;
    int *ptr = &n;

    // Increase value of n using the pointer
    *ptr += 1;
    printf("Value of n after increment: %d\n", n);

    // Create an array and pointer to it
    int arr[3] = {10, 30, 2000};
    int *p = arr;

    printf("\nArray values using pointer:\n");
    for (int i = 0; i < 3; i++) {
        printf("Element %d = %d\n", i + 1, *(p + i));
    }

    return 0;
}
