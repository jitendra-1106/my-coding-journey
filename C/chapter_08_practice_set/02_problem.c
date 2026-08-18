#include <stdio.h>

int main()
{
    char st[6];
    // scanf("%s",st);
    // printf("%s",st);
    for (int i = 0; i < 5; i++)
    {
        // scanf("%c", &st[i]);
        // fflush(stdin);     // %c whitespace bhi read karta hai, including Enter (\n).

        scanf(" %c", &st[i]);
        // Space before %c skips any leftover whitespace/newline from input.
    }

    st[5] = '\0';
    printf("%s", st);

    return 0;
}