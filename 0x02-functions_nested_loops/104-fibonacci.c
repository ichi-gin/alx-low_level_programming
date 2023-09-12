#include <stdio.h>

int main() {
    unsigned long long int a = 1;
    unsigned long long int b = 2;
    unsigned long long int next;

    printf("%llu, %llu, ", a, b);

    for (int i = 3; i <= 98; i++) {
        next = a + b;
        printf("%llu", next);

        if (i < 98) {
            printf(", ");
        } else {
            printf("\n");
        }

        a = b;
        b = next;
    }

    return 0;
}
