#include<iostream>
using namespace std;

//inline suggests the compiler to replace a small function call with the function's code to reduce function-call overhead.

inline int product(int a, int b){
    // inline tells the compiler that this small function may be expanded directly at the place where it is called.
    return a*b;
}

int main(){
    int x, y;
    cout<<"Enter the value of x and y:"<<endl;
    cin>>x>>y;
    cout<<"The product of x and y is "<<product(x, y)<<endl;
    cout<<"The product of x and y is "<<product(x, y)<<endl;
    cout<<"The product of x and y is "<<product(x, y)<<endl;
    cout<<"The product of x and y is "<<product(x, y)<<endl;
    cout<<"The product of x and y is "<<product(x, y)<<endl;
    cout<<"The product of x and y is "<<product(x, y)<<endl;
    cout<<"The product of x and y is "<<product(x, y)<<endl;
    cout<<"The product of x and y is "<<product(x, y)<<endl;
    cout<<"The product of x and y is "<<product(x, y)<<endl;
    cout<<"The product of x and y is "<<product(x, y)<<endl;

    return 0;
}

// inline suggests the compiler to replace the function call with its code, but the final decision is the compiler's.