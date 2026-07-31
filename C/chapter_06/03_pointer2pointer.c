#include <stdio.h>

int main(){
    int i = 7;
    int* j = &i;
    int** k = &j;

    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*(j));
    printf("The value of i is %d\n",*(&i));
    printf("The value of i is %d\n",**(k));
    
    return 0;
}

//  &  → It is used to obtain the memory address of a variable.
//  *  → It is used to access the value stored at the memory address pointed to by a pointer.