#include <stdio.h>

int factorial(int);
    // Factorial(5) = 1 X 2 X 3 X 4 X 5
    // Factorial(4) = 1 X 2 X 3 X 4
    // Factorial(3) = 1 X 2 X 3
    // Factorial(n) = 1 x 2 X 3 X .... X n-1 X n
    //  = 1 x 2 X 3 X .... X n-1


int factorial (int n){
    if(n==1 || n==0){   // Base condition : : Stops recursion when n becomes 0 or 1.
        return 1;
    }
     
     // Factorial(n) = Factorial(n-1) X n
    return factorial(n-1) * n;
}

int main(){
    int a = 4;
    printf("The factorial of %d is %d", a , factorial(a));
    
    return 0;
}

/*
Recursive call:
The function calls itself (function name inside the same function),with (n-1) until the base condition is reached.
This repeated self-calling works like a loop, but instead of usin
for/while, the function creates a new call each time.
*/