#include <stdio.h>

int main() {
    int num = 1000;
    int multipleSum = 0;
for (int i = 0; i < num; i++)
{
 if (i % 3 == 0 || i % 5 == 0)
{
  multipleSum += i;
}
}
printf("The sum of all multiples of 3 or 5 below %d is: %d\n", num, multipleSum);
return 0;
}
