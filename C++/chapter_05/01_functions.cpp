#include <iostream>
using namespace std;

//Function prototype/Declaration
int sum(int a, int b);
//int sum(int, int);// //Parameter names are optional in prototype

//Function Definition 
int sum(int a, int b){ //a and b are Formal Parameters.
    int c = a + b;
    return c;   // Returns the value of c to the function call.
}
// Formal Parameters receive values from Actual Parameters.

int main(){
    int num1, num2; // num1 and num2 are Actual Parameters when passed to sum().

    cout<<"Enter the value of num1:"<<endl;
    cin>>num1;

    cout<<"Enter the value of num2:"<<endl;
    cin>>num2;

    // num1 and num2 are Actual Parameters
    cout<<"The sum is "<<sum(num1 ,num2)<<endl;
    
    // Another way:
    // int t = sum(num1 ,num2);
    // cout<<"The sum is "<<t<<endl;

    return 0;
}