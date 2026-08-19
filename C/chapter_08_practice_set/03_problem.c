#include <stdio.h>

int strlen(char st[])
{
    int i = 0, count;
    char c = st[i];
    while (c != '\0')
    {
        c = st[i];
        i++;
    }
    count = i - 1;
    return count;
}

int main()
{
    char st[] = "Jitendra";

    printf("%d", strlen(st));
    return 0;
}