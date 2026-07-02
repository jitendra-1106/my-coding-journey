#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");
    return 0;
}



// Variable 'a' is initialized with the value 10.

// '=' is the assignment operator, not the comparison operator (==).
// It assigns the value 11 to 'a'.
// The assignment expression also returns 11.
// In C, any non-zero value is considered TRUE.
// Since the condition is TRUE, the if statement executes.
// Curly braces are not used because there is only one statement after if.