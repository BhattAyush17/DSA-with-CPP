#include <iostream>
int main() {
    int num = 344;
    int isPrime = 1;  // assume it's prime

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;  // not prime
            break;
        }
    }

    if (num <= 1) isPrime = 0; // edge case

    if (isPrime)
        std::cout << "prime num\n";
    else
        std::cout << "not prime\n";

    return 0;
}
