#include <stdio.h>

/*
Which of the following is used to appropriately read a multi-word string.
1. gets()
2. puts()
3. printf()
4. scanf()
*/

int main(){
    char st[40]; 
    gets(st);
    printf("%s",st);
    return 0;
}

/*
gets() → Used to read a multi-word string (including spaces). ✅
puts() → Used to print a string.
printf() → Used to print/output data.
scanf() → Used to take input; with %s, it normally reads only up to the first space.
*/

// use fgets:
/*
gets() is unsafe because it does not check the size of the array.
If the user enters too many characters, it can cause a buffer overflow.
Therefore, use fgets() instead of gets() because fgets() limits
the number of characters that can be read.
fgets(st, sizeof(st), stdin);
st → the character array where input is stored
sizeof(st) → tells fgets() the maximum size of the array
stdin → takes input from the keyboard
*/
