#include <stdio.h>

int main(){

    // Declare and initialize the loop counter
    int i = 1;

    // Variable to store the sum
    int sum = 0;
    while(i<=10){

        // Add the current value of i to sum
        sum +=i;
        i++;
    }
    printf("The sum of first ten natural number is %d",sum);

    return 0;
}