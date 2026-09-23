#include<iostream>
using namespace std;

// Function overloading: Same function name with different parameters.

// Same function name, but different number of parameters.
int sum(int a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}


// Same function name "volume" with different parameters.
// The compiler chooses the correct function based on the arguments.
// calculating the volume of a cylinder
int volume(double r, int h){
    return (3.14*r*r*h);
}

// calculating the volume of a cube
int volume(int a){
    return (a*a*a);
}

// calculating the volume of a rectangular box
int volume(int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 3 and 7 is "<<sum(3, 7)<<endl;
    cout<<"The sum of 3, 5 and 7 is "<<sum(3, 5, 7)<<endl;
    cout<<"The volume of cube with side 3 is "<<volume(3)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of cuboid of 3, 6, 7 is "<<volume(3, 6, 7)<<endl;
    return 0;
}