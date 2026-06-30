#include <stdio.h>

int main(){
  int a;
  printf("Enter a:");
  scanf("%d",&a);

  // Compare the value of 'a' with different cases.
  switch(a){
      case 1:
        printf("You entered 1\n");
        break; // Exit the switch after matching
      case 2:
        printf("You entered 2\n");
        break; // Exit the switch after matching
      case 3:
        printf("You entered 3\n");
        break; // Exit the switch after matching
      case 4:
        printf("You entered 4\n");
        break; // Exit the switch after matching
      default:  // Runs when no case matches
        printf("Nothing matched");
  }
    return 0;
}

//break;=Stops the switch here; otherwise, the following cases will also execute
/*
Without break;
Input:3
Output:
You entered 3
You entered 4
Nothing matched*/