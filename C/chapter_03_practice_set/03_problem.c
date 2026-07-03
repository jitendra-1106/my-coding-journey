#include <stdio.h>

int main(){
    int income ;
    float tax;
    tax = 0;         // Initialize tax to 0. Otherwise, it may contain a garbage value.
    // Take income from the user.
    printf("Enter income :");
    scanf("%d",&income);

    // No tax if income is 2.5 lakh or below.
    if(income<=250000){
        tax=0;
    }
     // 5% tax on the amount above 2.5 lakh.
    else if(income>250000 && income<=500000){     // && (AND): The block executes only if both conditions are true.
        tax=0.05*(income-250000);
    }
    // 5% tax on the first slab and 20% on the remaining amount.
    else if(income>500000 && income<=1000000){
        tax=0.2*(income-500000)    // 0.2 means 20% (20/100)
        +0.05*(500000-250000);    // Tax for the previous slab
    }
    // Tax from all three slabs.
    else {
        tax=0.3*(income-1000000)   // 0.3 means 30% (30/100)
        +0.2*(1000000-500000)     // Tax for the second slab
        +0.05*(500000-250000);   // Tax for the first slab
    }
      // Display the final tax amount.
    printf("The total tax you need to pay is %.2f",tax);  // %.2f prints the floating-point value with 2 digits after the decimal point.

    return 0;
}