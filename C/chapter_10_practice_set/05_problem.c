#include <stdio.h>

int main()
{
    FILE *ptr;

    // Variable created to store the number read from the file.
    // We use &num in fscanf() so the read value can be stored at num's address.
    int num;

    // Open int.txt in read mode to read the existing number.
    ptr = fopen("int.txt", "r");

    // Read the number from the file and store it in num.
    fscanf(ptr, "%d", &num);

    // Close the file after reading.
    // Now we can open the same file in write mode to replace its old content.
    fclose(ptr);

    // Open the same file in write mode.
    // "w" clears the old content and allows new data to be written.
    ptr = fopen("int.txt", "w");

    // Write 2 times the original number into the file.
    fprintf(ptr, "%d", 2 * num);

    // Close the file after writing is complete.
    fclose(ptr);

    return 0;
}