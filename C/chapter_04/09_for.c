#include <stdio.h>

int main()
{
    int n = 7;    // Number of times the loop will run.

    // The for loop has three parts:
    // 1. Initialization  : int i = 0  (starts the loop)
    // 2. Condition       : i < n      (loop runs while the condition is true)
    // 3. Update          : i++        (increments i after each iteration)
    for (int i = 0; i < n; i++)
    {
        // Prints the current value of i in each iteration.
        printf("The value of i is %d\n", i);
    }
    return 0;  // Indicates successful program execution.
}