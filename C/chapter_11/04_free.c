#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    ptr[0] = 4;
    printf("%d", ptr[0]);

    free(ptr);
    return 0;
}

/*Example:
{
    int n;
    int *ptr;
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    // ptr = (int *)calloc(n , sizeof(int));


    ptr[0] = 4;
    free(ptr);
    printf("%d", ptr[0]);

    return 0;
}
output = garbage value (for malloc)
output = zero (for calloc)

But:
    free(ptr) releases the allocated memory.

    If we try to access ptr[0] after free(ptr),
    the result is undefined behavior.
    It may print 4, garbage value, or the program may crash.

    So, never access dynamically allocated memory after free().


*/