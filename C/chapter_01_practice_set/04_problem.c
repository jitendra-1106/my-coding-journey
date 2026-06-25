#include <stdio.h>

int main(){
    float P,R,T,SI;
    printf("enter principal amount P=");//Principal (mool dhan)
    scanf("%f",&P);
    printf("enter Rate of interest R=");//Rate of Interest (% per year)
    scanf("%f",&R);
    printf("enter time T= ");//Time (years mein)
    scanf("%f",&T);
    SI=(P*R*T)/100;// Simple Interest = (Principal × Rate × Time) / 100
    printf("Simple Interest is %f",SI);//SI → Interest only on Principal
    return 0;
}


/* other method :
 #include <stdio.h>
 
 int main(){
    float p = 34.1;
    int r = 8;
    int t = 5;
    printf("The value of simple interest is %f ", (p*r*t)/100);
    return 0;
 }
*/