#include <stdio.h>
int main(){
    printf("size of int:%zu bytes\n",sizeof(int));
    printf("size of float:%zu bytes\n",sizeof(float));// float ka size print karega
    printf("size of char:%zu byte\n",sizeof(char));
    // sizeof tells how many bytes (memory space in RAM) a data type occupies
    return 0;
}