#include <stdio.h>
#include <math.h>   // Required for using the pow() function

int main(){
    
    int a = 5;

    // pow(a, 2) means a² (a raised to the power 2)
    // pow() returns a double (floating-point value), so %f is used to print the result (e.g., 25.000000).
    printf(" The area of this square is %f\n", pow(a , 2));
    return 0;
}