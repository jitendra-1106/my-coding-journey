#include <stdio.h>
#include <string.h> // Used to use string functions like strlen(), strcpy(), strcat(), and strcmp()

int main()
{
    char st[] = "Jitendra";
    // printf("%d",strlen(st));  // strlen() is used inside printf() to print the length of a string

    char target[30];
    strcpy(target, st); // target now contains "Jitendra"
    // strcpy() copies the second string into the first string; here, st is copied into target
    // printf("%s %s", st, target);

    char s1[30] = "Jitendra";
    char s2[30] = "Jat";
    strcat(s1, s2); // s1 now contains "JitendraJat" <no space in between>
    // strcat() adds the second string to the first string; here, s2 is added to the end of s1
    // printf("%s", s1);

    int a = strcmp("deep", "joke"); // returns negative  // DJ is negative(trick)('d' < 'j' in ASCII)
    // int a is used to store the integer value returned by strcmp()

    // int a = strcmp("deep", "deep"); // returns 0
    // int a = strcmp("joke", "deep"); // returns positive

    printf("%d", a);

    // strcmp() compares two strings and returns a value (negative, positive, or 0); if strings are equal, it returns 0
    // It returns a negative value if the first string is smaller, and a positive value if the first string is greater,
    // according to ASCII values

    return 0;
}