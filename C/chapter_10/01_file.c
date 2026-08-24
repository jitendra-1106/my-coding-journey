#include <stdio.h>
// Includes the standard input/output library.
// It provides FILE, fopen(), fscanf(), printf(), etc.

int main()
{
    FILE *ptr;
    // FILE is a data type provided by <stdio.h> for handling files.
    // ptr is a pointer that will store the address returned by fopen().

    ptr = fopen("harry.txt", "r");
    // Opens the file "harry.txt" in read mode ("r").
    // fopen() returns the address of the opened FILE object,
    // which is stored in ptr.

    int num;
    // Declares an integer variable to store the value read from the file.

    fscanf(ptr, "%d", &num);
    // Reads an integer from the file referred to by ptr.
    // "%d" specifies that the data is an integer.
    // &num gives the address where the read value will be stored.

    printf("The value of num is %d\n", num);
    // Prints the value stored in num.

    fscanf(ptr, "%d", &num);
    // Reads the next integer from the file.
    // The file position automatically moves forward after reading.

    printf("The value of num is %d\n", num);
    // Prints the second value stored in num.

    fclose(ptr);
    // Closes the file opened through ptr and releases the resources used by the file.

    return 0;
    // Ends the program successfully.
}