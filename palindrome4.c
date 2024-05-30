#include <stdio.h>
int is_palindrome(int n)
{
    int rev = 0, orig = n;
    while (n > 0)
      {
        rev = rev * 10 + n % 10;
        n /= 10;
      }
  
    return orig == rev;
 
}

int main() {
    int max = 0;
    for (int i = 999; i >= 100; i--)
      {
        for (int j = 999; j >= 100; j--)
          {
            int prod = i * j;
            if (is_palindrome(prod) && prod > max)
            {
                max = prod;
            }
        }
    }
    printf("largest palinndrome number is: %d\n", max);
    return 0;
}
