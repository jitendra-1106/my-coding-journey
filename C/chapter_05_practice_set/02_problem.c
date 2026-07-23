#include <stdio.h>

float c2f(float);

float c2f(float c){

    return ((9*c)/5) +32;
}

int main(){
    
    float c = 34;
    printf("Celsius to fahrenhiet for %.2f is %.2f", c, c2f(c));
    return 0;
}




/*  Function returns the value written in return,
    and the argument from main is passed as a copy (pass by value),
    whether the parameter name is same or different.
*/