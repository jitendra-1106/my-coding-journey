#include <stdio.h>

int main(){ 
    if(1){
        printf("This if is executed!\n");
    }
    if(23478){
        printf("This if is also executed!\n");
    }
    if(2.75){
        printf("This if is also executed!\n");
    }
    if('c'){
        printf("This character inside if is also executed!\n");
    }
    if(0){
        printf("I am zero - I am not executed!/n"); // This will not be printed because 0 is false.
    }
    return 0;
}

// In C, a non-zero value is considered true, and 0 is considered false.