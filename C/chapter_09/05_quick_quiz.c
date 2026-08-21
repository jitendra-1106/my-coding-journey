#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
void show(struct employee e);

void show(struct employee e)
{

    printf("%d %f %s",  e.code,e.salary,e.name);
}

int main()
{
    struct employee e;
    e.code = 45;
    e.salary = 66;
    strcpy(e.name, "Jitendra");
    show(e);
    // Passes the employee structure e to the show() function

    return 0;
}