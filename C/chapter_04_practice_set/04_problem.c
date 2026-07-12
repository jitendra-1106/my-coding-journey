#include <stdio.h>

int main(){

/*  What can be done using one type of loop can also be done 
    using the other two  types of loops – true or false?    */

    int i = 0;
    while(i<11){
        printf("The value of i is %d\n",i);
        i++;
    }
    
    return 0;
}


/* BY other loop:

int i = 0;
do{
    printf("The value of i is %d\n",i);
     i++;
 } 
  while(i<11);
*/



/* BY other loop:

for(int i=0;i<11;i++){
printf("The value of i is %d\n",i);
}
*/


/*
True:
Any program written using a while loop can also be
written using a do-while loop or a for loop.
The logic remains the same; only the syntax changes.
*/