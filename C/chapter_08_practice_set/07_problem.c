#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Kjufoesb!lvnbs!nbwbmjzb";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1; // Decrease the ASCII value of each character by 1 to decrypt the string.
        // Example: 'K' (ASCII 75) - 1 = 74 ('J')
    }
    printf("%s", str);

    return 0;
}