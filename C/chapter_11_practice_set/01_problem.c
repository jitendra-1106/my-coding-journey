#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;

    ptr = (int *)malloc(n * sizeof(int));

    ptr[0] = 4.5;
    ptr[1] = 8.5;
    ptr[2] = 8.29;
    ptr[3] = 3.56;
    ptr[4] = 5.99;

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);
    printf("%d\n", ptr[4]);
    return 0;
}