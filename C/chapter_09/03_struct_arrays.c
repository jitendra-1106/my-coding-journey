#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee facebook[100]; // an array of structures
    // Creates an array of 100 structure variables.
    // Each element can store one employee's code, salary, and name.

    // we can access the data using:

    facebook[0].code = 100;
    // Accesses the first employee's code and stores 100.
    // [0] means the first element and . is used to access its member.

    facebook[1].code = 77;



    struct employee jk = {100, 77, "Jitendra"};
    // Creates one structure variable named jk.
    // The values are assigned in the same order as the structure members:
    // 100 → code, 77 → salary, "jk" → name.

    printf("%d %f %s", jk.code, jk.salary, jk.name);
    // Prints the code, salary, and name of Jitendra.
    // The dot (.) is used to access members of a structure.
    return 0;
}