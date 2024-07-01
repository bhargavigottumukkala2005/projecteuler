#include <stdio.h>


unsigned int collatz_sequence_length(unsigned long long n) {
    unsigned int length = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        length++;
    }
    return length;
}

int main() {
    unsigned int max_length = 0;
    unsigned int starting_number = 0;
    unsigned int length;
    
    for (unsigned int i = 1; i < 1000000; i++) {
        length = collatz_sequence_length(i);
        if (length > max_length) {
            max_length = length;
            starting_number = i;
        }
    }
    
    printf("The starting number under one million that produces the longest chain is: %u\n", starting_number);
    printf("The length of the chain is: %u\n", max_length);
    
    return 0;
}
