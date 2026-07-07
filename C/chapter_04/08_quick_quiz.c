#include <stdio.h>

int main(){
    int n,i=1;    // 'n' stores the user's input, 'i' is the loop counter starting from 1.
     
    // Read the upper limit from the user.
    scanf("%d",&n);

     // The do-while loop executes the block first,
    // then checks the condition after each iteration.
    do
    {
        // Print the current value of the counter.
      printf("%d\n",i); 
       // Move to the next number.
      i++;
    } while (i<=n);   // Repeat until 'i' becomes greater than 'n'.
    
    
    return 0;
}