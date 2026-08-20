#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'b';     
    int contains = 0; 

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