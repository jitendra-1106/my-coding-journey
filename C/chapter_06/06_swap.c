#include <stdio.h>

void swap(int* a,int* b);

void swap(int* a,int* b){
    int temp;
    temp = *a;      // Get the value stored at address a      
    *a = *b;        // Put the value of b into  a 
    *b = temp;      // Put the old value of a into b
}
int main(){
    int a = 4,b = 6;
    swap(&a,&b);         // Send the addresses of a and b
    printf("The value of a is %d and the value of b is %d", a,b);
    return 0;
}