#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Jitendra kumar mavaliya";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1; // Increase the ASCII value of each character by 1
        // Example: str[0] = 'J' (ASCII 74), so 74 + 1 = 75 ('K')
    }
    printf("%s", str);

    return 0;
}