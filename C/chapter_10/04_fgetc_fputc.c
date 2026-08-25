#include <stdio.h>

int main()
{
    FILE *ptr;

    // ptr = fopen("harry.txt", "r");
    // char c = fgetc(ptr); // used to read a character from file
    // printf("%c", c);

    ptr = fopen("harry.txt", "w");
    fputc('c', ptr); // used to write character 'c' to the file
    return 0;
}