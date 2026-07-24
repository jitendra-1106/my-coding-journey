#include <stdio.h>

float force(float);

float force(float m){
     
     // Returns force using the formula: Force = mass × gravity (F = m × g)
    return m * 9.8;
}
int main(){
    
    int m = 45; // in kg

     // Calls the function and prints the calculated force
    printf("The value of force is %f\n",force(m));
    return 0;
}