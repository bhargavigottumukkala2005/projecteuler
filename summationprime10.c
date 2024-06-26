#include <stdio.h>
int is_prime(int num) {
    if (num < 2) return 0;
    int count = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) count++;
        if (count > 1) return 0;
    }
    return 1;
}

int main() {
    long long sum = 0;

    for (int num = 2; num < 2000000; num++) {
        if (is_prime(num)) {
            sum += num;
        }
    }

    printf("The sum of all primes below two million is %lld\n", sum);
    return 0;
}
