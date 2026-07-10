#include <stdio.h>

int main(){

    for(int i=0;i<11;i++){

        if(i==5){
            continue;  //skip this iteration now!!
                      // Skip this iteration and move to the next one.
        }
        
        printf("i is %d\n",i);
    }
    return 0;
}