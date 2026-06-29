#include <stdio.h>

int main(){
    int age = 41;
    if(age>60){
        printf("you can drive and you are a senior citizen");
    }
    else if(age>40){
        // This condition is checked only if the first condition is false.
        // Since age = 41, this condition becomes true.
        printf("you can drive and you are elder");
    }
    else if(age>18){
        // This condition is checked only if all the above conditions are false.
        printf("you can drive");
    }
    else{
         // Executes only when none of the above conditions are true.
        printf("you cannot drive");
    }
    return 0;
}

 // The program checks the conditions from top to bottom.
// As soon as one condition becomes true,
// its block is executed and the remaining conditions are skipped.
//The last “else” is optional.
