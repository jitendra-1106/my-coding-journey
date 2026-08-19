#include <stdio.h>

// Slicing a string means extracting a specific part of the string.

char *slice(char st[], int m, int n)
{
    // Store the address of the character at index m.
    char *ptr1 = &st[m];

    // Store the address of the character at index n.
    char *ptr2 = &st[n];

    // Make the string start from the character at index m.
    st = ptr1;

    // Add the null character at index n to end the sliced string.
    st[n] = '\0';

    // Return the sliced string.
    return st;
}

int main()
{
    char st[] = "Jitendra Bhai";

    // Call slice() to extract the string from index 1 to index 9.
    printf("%s", slice(st, 1, 9));
    return 0;
}

/*
#include <stdio.h>

// Slicing a string means extracting a specific part of the string.

void slice(char st[], int m, int n)
{
    int i;

    // Copy characters from index m to the beginning of the string.
    for (i = 0; i < n - m; i++)
    {
        st[i] = st[m + i];
    }

    // Add the null character to terminate the sliced string.
    st[i] = '\0';
}

int main()
{
    char st[] = "Jitendra Bhai";

    // Slice the string from index 1 to index 9.
    slice(st, 1, 9);

    // Print the sliced string.
    printf("%s", st);

    return 0;
}
*/