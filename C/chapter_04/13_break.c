#include <stdio.h>

int main(){

     // Run the loop from 0 to 10.
    for(int i=0;i<11;i++){

         // Stop the loop when i becomes 5.
        if(i==5){
            break;   //exit the loop now!!
        }
        printf("i is %d\n",i);
    }
    return 0;
}