#include <stdio.h>

int main() { 
    int sumofsquares = 0;
    int squareofsum = 0;
    int i;

    for (i = 1; i <= 100; i++) {
        sumofsquares += i * i;
    }

    int sum = 0;
    for (i = 1; i <= 100; i++) {
        sum += i;
    }
    squareofsum = sum * sum;

    int dif = squareofsum - sumofsquares;

    printf("Difference between the sum of the squares and the square of the sum for the first 100 natural numbers is: %d\n", dif);

    return 0;
}
