#include <stdio.h>

int main()
{
    int n = 7;       

    // Assume the number is prime initially
    int not_prime = 0;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
         // Check all numbers from 2 to n-1.
        for (int i = 2; i < n; i++)
        {
            // If n is divisible by i,
            // then n is not a prime number
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }
    if (not_prime)
    {
        printf("%d is not prime\n", n);
    }
    else
    {
        printf("%d is prime\n", n);
    }

    return 0;
}