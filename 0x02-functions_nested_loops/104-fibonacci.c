#include <stdio.h>

int main() {
    unsigned long long int a = 1, b = 2, c;
    int count = 0;

    while (count < 98) {
        if (count == 0) {
            printf("%llu", a);
        } else {
            printf(", %llu", a);
        }

        c = a + b;
        a = b;
        b = c;

        count++;
    }

    printf("\n");

    return 0;
}
