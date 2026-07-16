#include <stdio.h>

int main()
{
     // Number to check
    int n = 4;

    // 0 = Prime, 1 = Not Prime
    int not_prime = 0;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        // Start checking from 2
        int i = 2;
        do
        {
             // If the number is divisible by i,
            // then it is not a prime number
            // (Skip the case when n is 2)
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        } while (i < n);
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