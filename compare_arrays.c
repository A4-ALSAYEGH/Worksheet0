#include <stdio.h>

int main(void) {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int equal = 1;

    for (int i = 0; i < 5; i++) {
        if (arr1[i] != arr2[i]) {
            equal = 0;
            break;
        }
    }

    if (equal)
        printf("Equal\n");
    else
        printf("Not Equal\n");

    return 0;
}
