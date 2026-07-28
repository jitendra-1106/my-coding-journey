#include <stdio.h>

int sum_natural(int);

int sum_natural(int n){
         
         // Base Case
        if(n==1){
            return 1;
        }

        //sum_natural(n)  = 1 + 2 + 3 + 4 + 5 +......... + (n-1) + n;
        //sum_natural(n) = sum_natural(n-1) + n;
        return sum_natural(n-1) + n;
    
}
int main(){

    // Function Call
    printf("The sum of first 5 natural number is %d", sum_natural(5));
    
    return 0;
}