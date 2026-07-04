#include <stdio.h>

int main(){
    int year;
    printf("Enter year :\n");
    scanf("%d",&year);
    //Leap Year = (4 se divisible AND 100 se divisible nahi) OR (400 se divisible).
    if((year %4==0 && year %100!=0) || year %400==0){
        printf("This is a leap year");
    }
    else{
        printf("This is not a leap year");
    }
    return 0;
}




/*
if(year %400==0){
    // Leap Year
}
else if(year %100==0){
    // Not Leap Year
}
else if(year %4==0){
    // Leap Year
}
else{
    // Not Leap Year
}
*/