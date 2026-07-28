#include <stdio.h>

int main(){
    int n = 3;

    // Outer loop prints the number of rows
    for(int i=0; i<3; i++){
        // This loop runs from 0 to 2
        // if i = 0 ---> print 1 star 
        // if i = 1 ---> print 3 stars 
        // if i = 2 ---> print 5 stars 
        // no_of_stars = (2*i+1)

        // This for loop prints (2*i+1) stars
        // Inner loop prints stars for the current row
        for(int j=0; j<2*i+1; j++){

            // Prints one star in each iteration
            printf("*");
        }
        
        // Move the cursor to the next line after printing one row
        printf("\n");
    }
    return 0;
}