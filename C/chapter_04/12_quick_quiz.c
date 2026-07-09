#include <stdio.h>

int main(){
    //Write a program to print ‘n’ natural numbers in reverse order.
    int n;
    printf("Enter the number n:");
    scanf("%d",&n);
    for (int i = n; i; i--)
    {
    printf("%d\n",i);
    }
    
    return 0;
}