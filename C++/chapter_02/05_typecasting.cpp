#include<iostream>
using namespace std;

int main(){

    // Typecasting means explicitly converting a value from one data type to another.

    int a = 45;
    float b = 45.81;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    
    int c = (int)b;

    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    cout<<"The expression is "<<a+b<<endl;
    // No explicit(clearly and directly done/shown, not automatically) typecasting.
    // 'a' is automatically converted to float before addition.
    // This is called implicit(automatically, without explicitly telling it to happen) type conversion.
   
   
   
    return 0;
}