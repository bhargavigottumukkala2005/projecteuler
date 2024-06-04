#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;  
    for (int i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) return 0; 
    }
    return 1;  
}

int main() {
    int count = 0;
    int number = 2;  
    while (count < 10001) {
        if (isPrime(number)) {
            count++;
            if (count == 10001) {
                printf("The 10001st prime number is: %d\n", number);
                break;
            }
        }
        number++;
    }
    return 0;
}
