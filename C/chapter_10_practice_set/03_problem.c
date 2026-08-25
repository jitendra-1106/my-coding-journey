#include <stdio.h>

// Read the text file character by character and write each character twice into a separate file.

int main()
{
    int ch;
    FILE *ptr;
    FILE *ptr2;

    // Open jk.txt in read mode.
    // We will read characters from this file.
    ptr = fopen("jk.txt", "r");

    // Open jk2.txt in append mode.
    // New content will be added at the end of this file.
    ptr2 = fopen("jk2.txt", "a");
    while (1)
    {

        ch = fgetc(ptr);

        if (ch == EOF)
        {
            break;
        }
        else
        {
            // Write the same character into jk2.txt for the first time.
            fprintf(ptr2, "%c", ch);
            // Write the same character into jk2.txt for the second time.
            fprintf(ptr2, "%c", ch);

            // Print the character on the screen.
            printf("%c", ch);
        }
    }
    return 0;
}