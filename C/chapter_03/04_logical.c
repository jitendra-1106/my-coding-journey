#include <stdio.h>

int main(){
    int a=1; int b=0;
    printf("The value of a and b is %d\n", a&&b); // Logical AND: true only if both values are true.
    printf("The value of a or b is %d\n", a||b);  // Logical OR: true if at least one value is true.
    printf("The value of not(a) is %d\n", !a);    // Logical NOT: changes true to false and false to true.


    if(a&&b){  // Executes only when both a and b are true.
        printf("both are true\n");
    }

     // is same as writing.....
    // The nested if statement below does the same work as (a && b).
    if(a){                               // First checks if a is true.
        if(b){                          // Then checks if b is true.
            printf("both are true");
        }
    }
    return 0;
}

// In C, 0 means false and any non-zero value means true.