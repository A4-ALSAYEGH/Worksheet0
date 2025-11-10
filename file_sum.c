#include <stdio.h>

int main(void) {
    const char *path = "foo.txt";
    FILE *f = fopen(path, "r");
    if (!f) { perror("fopen"); return 1; }

    long sum = 0, x;
    while (fscanf(f, "%ld", &x) == 1)
        sum += x;

    fclose(f);
    printf("sum = %ld\n", sum);
    return 0;
}
