#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // 6 6 4                // C language does NOT define the evaluation order
    // 4 5 5                // Different compilers or optimization levels may.
    // 5 5 4                // produce different outputs
    return 0;
}



/* Never modify the same variable more than once in a single expression
(or modify and read it without sequencing), because it leads to Undefined Behavior in C.
*/