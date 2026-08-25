#include <stdio.h>

int main()
{
    FILE *fptr;

    // Open "harry.txt" in write mode.
    // "w" mode creates the file if it does not exist.
    // If the file already exists, its old content is deleted (file becomes empty).
    fptr = fopen("harry.txt", "w");
    // fptr = fopen("harry.txt", "a");

    int num = 432;
    fprintf(fptr, "%d", num);

    fclose(fptr);

    return 0;
}

/*
"w" = Write mode
-Old content is cleared, then new content is written from the beginning.

"a" = Append mode
-Old content is kept, and new content is added at the end of the file.
*/