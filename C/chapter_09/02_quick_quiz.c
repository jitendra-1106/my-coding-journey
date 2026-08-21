#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2, e3;

    printf("employee code:");
    scanf("%d %d %d", &e1.code, &e2.code, &e3.code);

    printf("employee salary:\n");
    scanf("%f %f %f", &e1.salary, &e2.salary, &e3.salary);

    printf("employee name:\n");
    scanf("%s %s %s", e1.name, e2.name, e3.name);

    printf("%d  %f  %s\n", e1.code, e1.salary, e1.name);
    printf("%d  %f  %s\n", e2.code, e2.salary, e2.name);
    printf("%d  %f  %s\n", e3.code, e3.salary, e3.name);

    return 0;
}