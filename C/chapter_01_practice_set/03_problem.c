#include <stdio.h>

int main(){
    float c=38.0,f;
    f=(9.0/5.0)*c+32;
    printf("the value in fahrenheit is %f",f);
    return 0;
}
/*f=(9/5)*c+32: 9/5 gives the wrong answer because both numbers are integers 
and integer division returns 1 instead of 1.8 */