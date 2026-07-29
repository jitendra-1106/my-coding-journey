#include <stdio.h>

int main(){
    int i =72;
    int *j = &i;  // j is a pointer to int ,  // &i = address of i , // j stores the memory address of i                
    int k = 71;


    printf("The address of i is %p\n",&i);   // printf("The address of i is %u\n",&i);
    printf("The address of i is %p\n",j);   // j is a pointer printing to i (j is an integer pointer)
    printf("The address of k is %p\n",&k);

    printf("The value at address j is %d\n",*j);  //printf("The value at address j is %d\n",*(&i));
    // *j goes to the address stored in j and prints the value stored at that address.


    return 0;
}