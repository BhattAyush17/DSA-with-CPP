#include <stdio.h>

int main() {
    int x, i, j, isPrime;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Prime numbers up to %d are:\n", x);

    for (i = 2; i <= x; i++) {
        isPrime = 1; // assume i is prime

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
