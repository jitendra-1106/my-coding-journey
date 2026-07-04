#include <stdio.h>
// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
int main(){
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    printf("The value of character is %d\n",ch);
    // 97-122
    if(ch>=97 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
        printf("This character not lowercase\n");
    }
    return 0;
}




/*
Range	Meaning
48–57	Numbers (0–9)
65–90	Uppercase (A–Z)
97–122	Lowercase (a–z)
*/