#include <stdio.h>

// This function receives the address of i
int returning_5(int *ptr)
{
    printf("The value of ptr is %d\n", ptr);
    printf("The value at ptr is %d\n", *ptr);
    return 5;
}
int main()
{
    int i = 2;
    int *ptr = &i;
    printf("The address of i is %d\n", ptr);

    // Pass the address of i to the function
    returning_5(ptr);
    return 0;
}