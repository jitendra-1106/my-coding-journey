#include <stdio.h>

int main(){
           // condition ? expression-if-true : expression-if-false
          // Here "?" and ":" are called Ternary Operators
          int a=345;                      // If (a > b) is true, the first printf() is executed.
                                         // Otherwise, the second printf() is executed.
          int b=46;
          a>b?printf("a is greater"):printf("b is greater");
    return 0;
}




// The ternary operator is a short form of the if-else statement.
// It is best suited for simple conditions.
// The ternary operator is an expression, not a statement. It returns a value based on a condition.
// '?' and ':' together form the ternary (conditional) operator.