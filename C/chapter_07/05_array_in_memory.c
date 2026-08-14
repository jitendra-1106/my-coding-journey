#include <stdio.h>

int main()
{
    // Create an integer array to store marks of 5 students.
    int marks[5];

    printf("Enter marks of 5 students\n:");

    // Loop runs 5 times to take marks as input.
    for (int i = 0; i < 5; i++)
    {
        // &marks[i] gives the address of the element at index i.
        // scanf stores the entered value at that memory address.
        scanf("%d", &marks[i]);
    }

    // Loop runs 5 times to print the address of each array element.
    for (int i = 0; i < 5; i++)
    {
        // Print the memory address of each element of the array.
        printf("The address of marks at index %d is %u\n", i, &marks[i]);
    }
    return 0;
}

// Array elements are stored in contiguous memory locations.
// Since int usually takes 4 bytes, the address of the next element
// is 4 bytes after the previous element.