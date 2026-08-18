#include <stdio.h>

int main()
{
    // char st[] = {'a', 'b', 'c', '\0'};
    char st[] = "abc"; // same as doing  char st[] = {'a', 'b', 'c', '\0'};

    // for (int i = 0; i < 3; i++) // Does NOT print the null character '\0'
    for (int i = 0; i <= 3; i++) // Prints the null character '\0' as well
    {
        printf("character is %c\n", st[i]);
    }
    return 0;
}