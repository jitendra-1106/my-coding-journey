#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;

    ptr = (int *)calloc(n, sizeof(int));

    ptr[0] = 4;
    printf("%d", ptr[0]);

    // Resize the allocated memory from 5 integers to 10 integers.
    // realloc() changes the size of previously allocated memory.
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    free(ptr);

    return 0;
}


// malloc()  → Allocates new memory
// calloc()  → Allocates new memory and initializes it to zero
// realloc() → Changes the size of previously allocated memory
// free()    → Releases dynamically allocated memory