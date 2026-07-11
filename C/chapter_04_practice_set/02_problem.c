#include <stdio.h>

int main(){
    int n=10;
    for (int i = 10; i>=1; i--)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    
    return 0;
}


/*
// Loop starts from 10 and continues until i becomes 0.
// Since 0 is treated as false in C, the loop stops at i = 0.
for (int i = 10; i; i--)
Rule: 0 = False(loop terminated), Non-zero = True.(2,-2,..)
*/