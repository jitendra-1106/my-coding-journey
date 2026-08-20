#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'b';  // Character whose occurrence we want to count
    int count = 0; // Stores the number of times the character occurs

    char str[] = "Kjufoesb!lvnbs!nbwbmjzb";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
            count++;
    }
    printf("%d", count);

    return 0;
}