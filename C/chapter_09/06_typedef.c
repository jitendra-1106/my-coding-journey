#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp; // "Emp" is an alias (short name) for struct employee

int main()
{
    // typedef can also be used with normal data types
    // typedef int Jitendra;
    // Jitendra a = 55;   // Same as: int a = 55;  //Means: int = Jitendra
    // printf("The value of a is %d",a);

    // typedef struct employee Emp;
    // This can be used separately when "typedef" is not written above the structure.
    // After this, "Emp e1;" can be used instead of "struct employee e1;".


    Emp e1; // same as  struct employee e1;
    Emp *ptr = &e1;
    e1.code = 45;
    e1.salary = 66;
    strcpy(e1.name, "Jitendra");

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s\n", ptr->code, ptr->salary, ptr->name);

    return 0;
}