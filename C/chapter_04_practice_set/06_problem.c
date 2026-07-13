#include <stdio.h>

int main(){
    int sum = 0;
    int i = 1;
do{
sum +=i;
i++;
} while(i<=10);

 printf("The sum of first ten natural numbers is %d",sum);
    return 0;
}



 /*
  int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum +=i;
    }

    printf("The sum of first ten natural numbers is %d",sum);
    */