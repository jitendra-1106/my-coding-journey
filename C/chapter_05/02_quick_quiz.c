#include <stdio.h>



// Function Prototypes (Declaration)
// Tell the compiler that these functions exist.
// They return nothing (void) and take no arguments.
void good_morning();
void good_afternoon();
void good_evening();

// Function Definition
// Prints "good morning"
void good_morning(){
     printf("good morning\n");
}

// Function Definition
// Prints "good afternoon"
void good_afternoon(){
    printf("good afternoon\n");
}

// Function Definition
// Prints "good evening"
void good_evening(){
    printf("good evening\n");
}


int main(){
    
    // Function Call
    // Execution jumps to good_morning()
    good_morning();

    // After good_morning() finishes,
    // execution comes back here.
    good_afternoon();

    // After good_afternoon() finishes,
    // execution comes back here.
    good_evening();
          
     return 0;
}