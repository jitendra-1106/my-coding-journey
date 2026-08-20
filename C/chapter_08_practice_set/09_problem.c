#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'b';     // Character whose occurrence we want to contains
    int contains = 0; // Stores the number of times the character occurs

    char str[] = "Kjufoesb!lvnbs!nbwbmjzb";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains = 1;
            break;
        }
    }
    if (contains)
    {
        printf("yes it contains!\n");
    }
    else
    {
        printf("Does not contain!");
    }

    return 0;
}