#include <stdio.h>

int main(){
    int subject1,subject2,subject3;
    float total;
    float avg;
    printf("enter marks for subject1:\n");
    scanf("%d",&subject1);
    printf("enter marks for subject2:\n");
    scanf("%d",&subject2);
    printf("enter marks for subject3:\n");
    scanf("%d",&subject3);
    total = subject1 + subject2 + subject3;
    avg = total/3;
    printf("the Avg marks is %f\n",avg);
    if(subject1<33){
        printf("You failed because Subject 1 has less than 33 marks.");
    }
    else if(subject2<33) {
        printf("You failed because Subject 2 has less than 33 marks.");
    }
    else if(subject3<33){
        printf("You failed because Subject 3 has less than 33 marks");
    }
    else if(avg<40){
        printf("You failed because your overall percentage is below 40");
    }
    else {
        printf("Congratulations! You passed");
    }
    
    return 0;
}




/*
#include <stdio.h>

int main(){
    int marks1, marks2, marks3;
    printf("Enter marks1: \n");
    scanf("%d", &marks1);
    printf("Enter marks2: \n");
    scanf("%d", &marks2);
    printf("Enter marks3: \n");
    scanf("%d", &marks3);
    printf("The marks are %d,%d and %d\n", marks1, marks2, marks3);

    if(marks1<33 || marks2<33 || marks3<33){
        printf("You are failed due to less marks in individual subject(s)\n"); 
    }
    else if((marks1 + marks2 + marks3)/3 <40){
        printf("You are failed due less percentage\n"); 
    }
    else{
        printf("You are passed!");
    }
    return 0;
}*/