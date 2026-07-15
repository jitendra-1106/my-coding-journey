#include <stdio.h>

int main(){
    int i = 1;
    int n = 4;
    int product = 1;

    while(i<=n){
      
        product = product*i;     //product *=i;
        i++;
    }
    printf("The factorial is %d", product);
    return 0;
}