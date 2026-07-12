#include <stdio.h>

int main(){


/*A do while loop is executed:
     a. At least once.
     b. At least twice.
     c. At most once.
*/
int i = 5;
do{

    printf("The value of i is %d\n",i);

}  while(i<5);

    return 0;
}

// A do-while loop executes the loop body first
// and checks the condition afterward.
// Therefore, it always runs at least once.