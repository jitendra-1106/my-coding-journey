#include <stdio.h>

int main()
{
    // POINTER ARITHMETIC USING INTEGER POINTER
    // int a = 5;
    // int* ptr = &a;
    // printf("The address of a is %u\n",&a);
    // printf("The address of a is %u\n",ptr);
    // ptr++;
    // printf("The value of ptr is %u\n",ptr);

    // POINTER ARITHMETIC USING CHARACTER POINTER
    // char a = 'A';
    // char* ptr = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The address of a is %u\n", ptr);
    // ptr++;
    // printf("The value of ptr is %u\n", ptr);

    // POINTER ARITHMETIC USING FLOAT POINTER
    float a = 3.55;
    float *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);

    return 0;
}


/* 
[ptr++] moves the pointer to the next integer/char/float memory location.
The address increases by sizeof(integer/char/float) bytes.
If integer/float takes 4 bytes, the address increases by 4.
If char takes 1 bytes, the address increases by 1.
[ptr--] moves the pointer to the previous memory location.
The address decreases by sizeof(data_type) bytes.
*/