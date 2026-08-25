#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    // int arr[n]; // Not allowed in c
    
    ptr = (int *)malloc(n * sizeof(int));
    /* Dynamic Memory Allocation: malloc() is used to allocate the 
    required memory at runtime when the size is decided by the user.*/

    ptr[0] = 4;
    ptr[2] = 3;
    printf("%d", ptr[0]);
    return 0;
}