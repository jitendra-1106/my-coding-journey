#include<iostream>
using namespace std;

int fib(int);

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
/*
Step by step calculation of fib(4)
= fib(3) + fib(2)
= [fib(2) + fib(1)] + [fib(1) + fib(0)]
= [(fib(1) + fib(0)) + 1] + [1 + 1]
= [(1 + 1) + 1] + [1 + 1]
= [2 + 1] + 2
= 5 
*/

int factorial(int);

int factorial(int n){
    if(n<=1){
        return 1;
    }
    // n! = n * (n-1)!
    // 0! = 1
    return n*factorial(n-1);
}
/*
Step by step calculation of factorial(4)
 factorial(4) = 4 * factorial(3); 
 factorial(4) = 4 * 3 * factorial(2);
 factorial(4) = 4 * 3 * 2 * factorial(1);
 factorial(4) = 4 * 3 * 2 * 1;
 factorial(4) = 24;
*/

int main(){
    int x;
    cout<<"Enter the value of x:"<<endl;
    cin>>x;
    cout<<"The factorial of "<<x<<" is "<<factorial(x)<<endl;
    cout<<"The term in fibonacci sequence at position "<<x<<" is "<<fib(x);

    return 0;
}