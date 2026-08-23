#include <stdio.h>

struct complex
{
    int real;
    int imaginary;
};

void display(struct complex c)
{
    printf("The value of complex number is %d + %di\n", c.real, c.imaginary);
}

int main()
{
    struct complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part\n");
        scanf("%d", &carr[i].real);
        printf("Enter imaginary part\n");
        scanf("%d", &carr[i].imaginary);
        display(carr[i]);
    }

    return 0;
}