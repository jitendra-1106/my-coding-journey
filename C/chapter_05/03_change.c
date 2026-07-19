#include <stdio.h>

// Function Prototype
int change(int a);

int change(int a)
{
     // 'a' is just a COPY of 'b', not the original variable.
    a = 77; // Misnomer   ,,     // Only the local copy changes.  
    return 0;                 
}

int main()
{

    int b = 22;

    // A COPY of 'b' is passed to the function (Pass by Value).
    // The original variable 'b' is NOT changed.

    change(b);            // The value of b remains 22
    printf("b is %d", b);  // Still prints 22 because 'b' itself never changed.

    return 0;
}



// A copy of 'b' is passed to the function, so changing 'a' does NOT change the original variable 'b'.
// Pass by Value = A copy is sent. The original variable remains unchanged.