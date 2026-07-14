#include <stdio.h>

int main(){
    int n = 8;
    int mul=0;
    int sum=0;
    for (int i = 1; i <= 10; i++)
    {
        mul = n * i;
                        //sum += 8 * i;
        sum +=mul;
    }
    printf("The sum of the table of 8 is %d",sum);
    
    return 0;
}