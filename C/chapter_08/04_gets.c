#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // The entered string is stored in st!
              // gets() only takes the input; it does not print the string, so printf() is needed

    printf("%s", st); // printf() prints the string on the same line

    // puts(st); // Prints the string & places the cursor on the next line
    // puts() prints the string and moves the cursor to the next line, so printf() is not needed
    printf("hey");

    return 0;
}