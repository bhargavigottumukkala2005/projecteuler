#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int result = 1;
    for (int i = 2; i <= 20; i++) {
        result = lcm(result, i);
    }
    printf("The smallest positive num that is evenly divisible by all of the numbers from 1 to 20 is %d\n", result);
    return 0;
}
