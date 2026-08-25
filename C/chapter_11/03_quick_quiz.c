#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    
    // Allocate memory for n integers using calloc().
    // calloc() initializes all allocated memory to 0.
    ptr = (int *)calloc(n , sizeof(int));
   
    ptr[0] = 4;
    printf("%d", ptr[0]);
    return 0;
}

// malloc() allocates memory but does not initialize it,
// so the allocated memory contains indeterminate (garbage) values.

// calloc() allocates memory and initializes all allocated bytes to 0,
// so integer elements initially contain 0.