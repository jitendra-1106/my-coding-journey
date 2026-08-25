#include <stdio.h>

int main()
{
    int ch;      // char ch; - // Use int instead of char because fgetc() can return EOF.
            //  EOF is an integer value used to indicate the end of the file.
    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);

        // when all the content of a file has been read break
        // When the end of the file is reached, fgetc() returns EOF.
        // So, break the loop.
        if (ch == EOF)
        {
            break;
        }
    }
    return 0;
}