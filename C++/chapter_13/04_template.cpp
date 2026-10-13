#include<iostream>
using namespace std;

//Function Templates & Function Templates with Parameters.

/*
float FuncAvg1(int a, int b){
    float avg = (a+b)/2.0;
    return avg;
}

float FuncAvg2(int a, float b){
    float avg = (a+b)/2.0;
    return avg;
}
*/
/*
These two functions are commented out because we can use a function template
to handle different data types with a single function instead of defining
separate functions for different parameter types.
This reduces code duplication and makes the code more reusable.
*/


template<class T1, class T2>
float FuncAvg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

/*
The function is named swapp() instead of swap() to avoid confusion
with the standard library function swap() provided by C++.
This allows us to practice implementing the swapping logic ourselves.
*/
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    
    /*
    float x, y;
    x = FuncAvg1(2, 5);
    printf("The avg is : %f\n",x);
    // cout<<x<<endl;

    y = FuncAvg2(2, 5.7);
    printf("The avg is : %f\n",y);

    // printf() is a C output function, but it can also be used in C++.
    // Even though <iostream> is included, printf() may still work because the compiler
    // can make its declaration available indirectly through other included headers.
    // However, the correct header for printf() is <cstdio> or <stdio.h>.
    */

    float a;
    a = FuncAvg(5,2);
    // a = FuncAvg<int, int>(5, 2);
    cout<<"The average of these numbers is : "<<a<<endl;

    // In a class template, we usually specify the data type inside <> while creating an object.
    // In a function template, the compiler can often automatically determine the data types from the arguments passed to the function.
    
    float b;
    b = FuncAvg(5,2.5);
    // b = FuncAvg<int, double>(5, 2.5);
    cout<<"The average of these numbers is : "<<b<<endl;

    int x = 5, y = 1;
    swapp(x, y);
    cout<<"The number after swapping are: ";
    cout<<x<<" and "<<y<<endl;

    return 0;
}