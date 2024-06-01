#include <stdio.h>

int main()
{
  long int a = 600851475143;
  int i;
    for (i = 2; i <= a / 2; i++)
    {
        while (a % i == 0)
        {
            a = a / i;
        }
    }
    printf("largest prime factor: %ld\n", a);
    return 0;
}

