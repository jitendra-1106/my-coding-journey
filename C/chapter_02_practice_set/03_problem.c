#include <stdio.h>

int main(){
    //Write a program to check whether a number is divisible by 97 or not.
    // int a = 26788766; Not divisible
    int a = 3349895;//divisible
    printf("The value of a%97 is %d",a%97);
    return 0;
}

// '%' (modulus) gives the remainder after division.
// If a % 97 == 0, the number is divisible by 97.

/* printf mein % format specifier ke liye use hota hai. 
Agar actual % print karna ho, to %% likhna padta hai. */