#include <stdio.h>

int main(){
    int r = 6;
    int height = 5;
    printf("the area of cicle with radius %d is %f\n",r,3.14*r*r);
    printf("the volume of cylinder with radius %d and height %d is %f",r,height,3.14*r*r*height);
    return 0;
}

/* input from user-
#include <stdio.h>
int main(){
    float r,h,area,volume;
    printf("enter r=");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("the area of cicle with radius %f is %f\n",r,area);
    printf("enter h=");
    scanf("%f",&h);
    volume=3.14*r*r*h;
    printf("the volume of cylinder with radius %f and height %f is %f",r,h,volume);
    return 0;
}
*/