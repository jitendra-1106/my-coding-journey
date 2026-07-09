#include <stdio.h>

int main(){
        // Loop starts from 7 and runs until i becomes 0.
       // In C, any non-zero value is treated as TRUE.
      // So the loop stops when i reaches 0.
    for (int i = 7; i ; i--)
    {
    // Print the current value of i in each iteration.
        printf("%d\n",i);
    }
    
    return 0;
}

/*
// Curly braces are optional because the loop has only one statement.
// If more than one statement is needed later, braces must be added.
for (int i = 7; i; i--)
    printf("%d\n", i);
*/