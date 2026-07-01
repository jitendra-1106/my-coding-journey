#include <stdio.h>

int main() {

    int marks;
    char grade;

    // Take marks as input from the user
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Divide marks by 10 and check the result
    // Example:
    // 95 / 10 = 9
    // 82 / 10 = 8
    // 76 / 10 = 7
    // 64 / 10 = 6
    // 58 / 10 = 5
    // 42 / 10 = 4

    switch (marks / 10) {

        // If marks are between 90-100
        // 90/10 = 9
        // 95/10 = 9 , because int marks
        // 100/10 = 10
        case 10:
        case 9:
            grade = 'A';
            break;

        // If marks are between 80-89
        case 8:
            grade = 'B';
            break;

        // If marks are between 70-79
        case 7:
            grade = 'C';
            break;

        // If marks are between 60-69
        case 6:
            grade = 'D';
            break;

        // If marks are between 50-59
        case 5:
            grade = 'E';
            break;

        // If marks are less than 50
        default:
            grade = 'F';
    }
      // Display the final grade 
     // The matching case stores the grade in the 'grade' variable.
    // This printf() prints that grade using the %c format specifier.
   // Instead of printing here, we could also write printf() inside each case.                      
    printf("Grade = %c", grade);    

     return 0;
}