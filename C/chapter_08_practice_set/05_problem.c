#include <stdio.h>

// Custom version of strlen() to find the length of a string.
int mystrlen(char str[])                                        //// int mystrlen(char str[]) {
{                                                               //   int i = 0;
    int i = 0, count;                                           //   while (str[i] != '\0') {
                                                                //            i++;  }  
    // Store the current character of the string.               //   return i;    }
    char c = str[i];                            

    // Continue until the null character is encountered.
    while (c != '\0')                       
    {
        c = str[i];
        i++;
    }
    // Subtract 1 because i is incremented one extra time.
    count = i - 1;
    // Return the length of the string.
    return count;
}


// Custom version of strcpy() to copy one string into another.
void mystrcpy(char target[], char source[])
{

    // Copy each character from source to target.
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    // Add the null character to terminate the target string.
    target[mystrlen(source)] = '\0';
}



int main()
{
    char source[] = "Jitendra";
    char target[30];

    // Copy the contents of source into target.
    mystrcpy(target, source); // target now contains "harry"

    // Print both the original and copied strings.
    printf("%s %s", source, target);
    return 0;
}