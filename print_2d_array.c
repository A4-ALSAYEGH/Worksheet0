#include <stdio.h>

void print_array(int *arr, int width, int height) {
    for (int r = 0; r < height; ++r) {
        for (int c = 0; c < width; ++c) {
            printf("%4d", arr[r*width + c]);
        }
        printf("\n");
    }
}

int main(void) {
    int w = 4, h = 3;
    int grid[] = {
        1, 2, 3, 4,
        5, 6, 7, 8,
        9,10,11,12
    };
    print_array(grid, w, h);
    return 0;
}
