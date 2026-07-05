#include <stdio.h>
int main(){
    int i=0;

// The value of i is never updated inside the loop.
// i always remains 0, so the condition i < 4 stays true.
// This creates an infinite loop.

    
while(i<4){
    printf("The value of i is %d\n",i);
}
return 0;
}




/*
int main(){
    int i=0;

// 2 < 4 is always true.
// The condition never becomes false, so the loop runs forever.
// This is an infinite loop.

    
while(2<4){
    printf("The value of i is %d\n",i);
    i++;
}
return 0;
}
*/


