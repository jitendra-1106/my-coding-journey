#include<iostream>
using namespace std;

// What is a pointer? ----> Data type which holds the address of other data types.

int main(){
    
    int a = 7;
    int* b = &a;

    // & --> Address of operator
    // It gives the memory address of a variable.
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * --> Dereference operator [value at ..] 
    // It gives the value stored at the address held by a pointer
    cout<<"The value at address b is "<<*b<<endl;
    cout<<"The value at address b is "<<*(&a)<<endl;

    // pointer to pointer -->
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"Value of a is "<<**c<<endl;
    return 0;
}