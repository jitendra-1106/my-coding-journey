#include <stdio.h>

int main()
{
    char st[4];

    scanf("%s", st);  // No & before st because st itself represents the address of the first element of the array
    printf("%s", st); // st → &st[0]

    return 0;
}