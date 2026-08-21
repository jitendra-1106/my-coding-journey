#include <stdio.h>
#include <string.h>

// struct is used to group related data of different data types into one unit.

struct employee
{
    int code;      // Employee code
    float salary;  // Employee salary
    char name[10]; // Employee name
}; // semicolon is important
   // Creates a new user-defined structure type

int main()
{
    struct employee e1, e2;
    // Creates two variables e1 and e2 of type struct employee

    e1.code = 3183; // Stores 3183 in the code member of e1
    // The dot (.) is used to access a member of a structure.
    // e1.code means the 'code' member of structure variable e1.

    e1.salary = 76.88; // Stores 76.88 in the salary member of e1

    strcpy(e1.name, "Jitendra");
    // Copies "Jitendra" into the name array of e1
    // e1.name is the destination and "Jitendra" is the source

    printf("%d  %f  %s", e1.code, e1.salary, e1.name);
    // Prints the code, salary, and name of e1

    return 0;
}