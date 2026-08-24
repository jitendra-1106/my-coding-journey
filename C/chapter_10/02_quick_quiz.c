#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry2.txt", "r");
    // Opens "harry2.txt" in read mode.
    // If the file is opened successfully, its address is stored in ptr.
    // If the file cannot be opened, fopen() returns NULL.

    if (ptr == NULL)
    {
        // Checks whether the file was opened successfully.
        // If ptr is NULL, the file could not be opened.
        printf("The file does not exist sorry! \n");
    }
    else
    {

        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);

        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);

        fclose(ptr);
    }
    return 0;
}