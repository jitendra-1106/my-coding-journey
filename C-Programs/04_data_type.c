#include <stdio.h>
int main(){
//int a;
// a=3;
int a=3;
// float b=3.4;
float b;
b = 3.4;
//char c='r';
char c;
c='r';
printf("the value of a is %d\n",a);
printf("the value of b is %f\n",b);// float ke liye %f
printf("the value of c is %c\n",c); // char ke liye %c
// If you use wrong format specifiers (%d, %f, %c), it will give garbage values
return 0;
}