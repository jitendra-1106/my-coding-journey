#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;
    e1.code = 55;

    struct employee *ptr;
    ptr = &e1;

    // now we can print structure element using:
    printf("%d", (*ptr).code);  // ptr->code same as (*ptr).code

    return 0;
}