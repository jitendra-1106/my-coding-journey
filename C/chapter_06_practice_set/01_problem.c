#include <stdio.h>

int main(){
    int j = 11;
    int* ptr = &j;

    printf("The address of j is %d\n",&j);
    printf("The value j  is %d\n",*ptr);
    return 0;
}