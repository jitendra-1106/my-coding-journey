#include <stdio.h>

int main()
{
    float a = 9.0;
    int b = 2;
    float c = a / b;
    int d = 6.7;
    printf("The value of a/b is %f\n", c);// int b is automatically converted to float before division.
    printf("The value of d is %d", d);// Decimal part is discarded while storing in an int variable.
    return 0;
}
/*
TYPE CONVERSION
An Arithmetic operation between
• int and int → int
• int and float → float
• float and float → float
*/



/* if we use:
int a = 9;
int b = 2;
float c = a / b;
output is 4 not 4.5
*/