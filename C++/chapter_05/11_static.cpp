#include<iostream>
using namespace std;

// A static local variable keeps its value even after the function ends, so the next function call continues with its previous value.
int product(int a, int b){
    static int c = 0; // Initialized only once; value is preserved between calls.

    c = c + 1; // Increment c by 1 on every function call.

    return a*b+c;
}
int main(){
    int x, y;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    cout<<"The product of x and y is "<<product(x, y)<<endl;
    cout<<"The product of x and y is "<<product(x, y)<<endl;
    cout<<"The product of x and y is "<<product(x, y)<<endl;
    cout<<"The product of x and y is "<<product(x, y)<<endl;
    cout<<"The product of x and y is "<<product(x, y)<<endl;

    return 0;
}