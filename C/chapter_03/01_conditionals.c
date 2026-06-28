#include <stdio.h>

int main(){
    int age = 12;  // = is an assignment operator
    if(age>11){   // < is a relational operator
        printf("we are inside if\n");
        printf("your age is greater than 11\n");

    }
    if(age%6==0){   // == is a relational operator , == compares two values
        printf("we are inside another if\n"); // age%6 means remainder
        printf("your age is divisible by 6\n");
    }
    return 0;
}

