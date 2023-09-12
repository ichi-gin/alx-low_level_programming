#include <stdio.h>

int main() {
    unsigned long int a = 1, b = 2, c;
    int count = 2;

    printf("%lu, %lu, ", a, b);

    while (count < 98) {
        c = a + b;
        printf("%lu, ", c); // Removed ellipsis here

        count++;

        a = b;
        b = c;
    }

    return 0;
}
