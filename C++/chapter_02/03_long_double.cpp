#include<iostream>
using namespace std;

int c = 11;   // Global variable
int main(){

    // int a , b , c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c<<endl; 
    // //'::c' is used to access the global c when a local c also exists.
    

    float d = 36.4f;  // float d = 36.4F;
    // 'f' tells the compiler that 36.4 is a float literal.
    // Without 'f', a decimal value like 36.4 is treated as a double by default.

    long double e = 36.4l; // long double e = 36.4L;
    // 'l' tells the compiler that 36.4 is a long double literal.

    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    /*
    By default:
    36.4   -> double
    36.4f  -> float
    36.4l  -> long double
    */

    // cout<<"The size of 36.4 is "<<sizeof(36.4)<<endl;
    // cout<<"The size of 36.4f is "<<sizeof(36.4f)<<endl;
    // cout<<"The size of 36.4F is "<<sizeof(36.4F)<<endl;
    // cout<<"The size of 36.4l is "<<sizeof(36.4l)<<endl;
    // cout<<"The size of 36.4L is "<<sizeof(36.4L)<<endl;
    
    return 0;
}