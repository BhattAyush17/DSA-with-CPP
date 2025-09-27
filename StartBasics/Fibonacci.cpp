#include <stdio.h>

int main() {
    int f = 0;
    int s = 1;
    int c;
    int sum = f + s;

    printf("Fibonacci Series: %d %d ", f, s);

    for(int i = 2; i < 6; i++){  // already printed first two terms
        c = f + s;
        printf("%d ", c);
        sum += c;
        f = s;
        s = c;
    }

    printf("\nSum of first 6 Fibonacci numbers = %d\n", sum);
    return 0;
}
