#include <stdio.h>

int main()
{
    FILE *fptr;

    // Three integer variables to store the values read from the file.
    int num1, num2, num3;
    
    fptr = fopen("file.txt", "r");

    fscanf(fptr, "%d %d %d", &num1, &num2, &num3);
    printf("The values are %d %d %d", num1, num2, num3);

    fclose(fptr);

    return 0;
}