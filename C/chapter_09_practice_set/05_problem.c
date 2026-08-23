#include <stdio.h>

struct complex
{
    int real;
    int imaginary;
};

int main()
{
    struct complex c = {1, 2};
    printf("The value of complex number is %d + %di", c.real, c.imaginary);

    return 0;
}